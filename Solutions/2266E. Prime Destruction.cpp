#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll MAXV = 200000;
vector<ll> pf[MAXV + 1];

int main()
{
    fast;
    for(ll i = 2; i <= MAXV; i++){
        if(pf[i].empty()) for(ll j = i; j <= MAXV; j += i){
            pf[j].push_back(i);
        }
    }
    tc{
        ll n, k; cin >> n >> k; vector<ll> dp(n + 1, 0);
        for(ll i = k + 1; i <= n; i++){
            ll best = 1000000000000000000LL;
            for(ll j = 0; j < pf[i].size(); j++){
                ll p = pf[i][j];
                best = min(best, dp[i / p] * p + 1);
            }
            dp[i] = best;
        }
        ll ans = 0;
        for(ll i = 0; i < n; i++){
            ll a; cin >> a;
            ans += dp[a];
        }
        cout << ans << endl;
    }
    return 0;
}
