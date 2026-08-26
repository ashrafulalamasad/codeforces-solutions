#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, m, k; cin >> n >> m >> k;
    vector<vector<ll>> vals(m + 1);
    for(ll i = 0; i < n; i++){
        for(ll j = 1; j <= m; j++){
            ll x; cin >> x;
            vals[j].push_back(x);
        }
    }
    for(ll j = 1; j <= m; j++){
        sort(vals[j].begin(), vals[j].end(), greater<ll>());
    }
    ll p_max = m - k + 1, c_max = min(n, k);
    const ll NEG_INF = -1000000000000000000LL;
    vector<vector<ll>> dp(k, vector<ll>(c_max + 1, NEG_INF));
    for(ll p = 1; p <= p_max; p++){
        vector<vector<ll>> ndp(k, vector<ll>(c_max + 1, NEG_INF));
        vector<ll> best(k, NEG_INF);
        for(ll j = 0; j < k; j++){
            for(ll c = 1; c <= c_max; c++){
                best[j] = max(best[j], dp[j][c]);
            }
        }
        vector<ll> max_prev(k, NEG_INF);
        ll cur_max = NEG_INF;
        for(ll j = 0; j < k; j++){
            cur_max = max(cur_max, best[j]);
            max_prev[j] = cur_max;
        }
        for(ll j = 0; j < k; j++){
            ll y = p + j;
            if(max_prev[j] != NEG_INF){
                ndp[j][1] = max_prev[j] + vals[y][0];
            }else if(p == 1){
                ndp[j][1] = vals[y][0];
            }
            for(ll c = 2; c <= c_max; c++){
                if(j + 1 < k && dp[j + 1][c - 1] != NEG_INF){
                    ndp[j][c] = dp[j + 1][c - 1] + vals[y][c - 1];
                }
            }
        }
        dp = ndp;
    }
    ll ans = 0;
    for(ll j = 0; j < k; j++){
        for(ll c = 1; c <= c_max; c++){
            ans = max(ans, dp[j][c]);
        }
    }
    cout << ans << endl;
    return 0;
}
