#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, m, p; cin >> n >> m >> p;
    vector<vector<pair<ll, ll>>> pos(p + 1);
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < m; j++){
            ll x; cin >> x;
            pos[x].push_back({i, j});
        }
    }
    const ll INF = 1e18;
    vector<ll> dp(pos[1].size());
    for(ll i = 0; i < (ll)pos[1].size(); i++){
        dp[i] = pos[1][i].first + pos[1][i].second;
    }
    vector<ll> d(n * m);
    for(ll x = 2; x <= p; x++){
        const auto &prev = pos[x - 1];
        const auto &cur = pos[x];
        vector<ll> ndp(cur.size(), INF);
        if((ll)prev.size() * (ll)cur.size() <= n * m){
            for(ll i = 0; i < (ll)cur.size(); i++){
                ll r1 = cur[i].first;
                ll c1 = cur[i].second;
                for(ll j = 0; j < (ll)prev.size(); j++){
                    ll cost = dp[j] + abs(r1 - prev[j].first) + abs(c1 - prev[j].second);
                    if(cost < ndp[i]){
                        ndp[i] = cost;
                    }
                }
            }
        }else{
            fill(d.begin(), d.end(), INF);
            for(ll i = 0; i < (ll)prev.size(); i++){
                ll idx = prev[i].first * m + prev[i].second;
                if(dp[i] < d[idx]){
                    d[idx] = dp[i];
                }
            }
            for(ll i = 0; i < n; i++){
                ll base = i * m;
                for(ll j = 1; j < m; j++){
                    if(d[base + j - 1] + 1 < d[base + j]){
                        d[base + j] = d[base + j - 1] + 1;
                    }
                }
                for(ll j = m - 2; j >= 0; j--){
                    if(d[base + j + 1] + 1 < d[base + j]){
                        d[base + j] = d[base + j + 1] + 1;
                    }
                }
            }
            for(ll j = 0; j < m; j++){
                for(ll i = 1; i < n; i++){
                    ll idx = i * m + j;
                    ll prv = idx - m;
                    if(d[prv] + 1 < d[idx]){
                        d[idx] = d[prv] + 1;
                    }
                }
                for(ll i = n - 2; i >= 0; i--){
                    ll idx = i * m + j;
                    ll nxt = idx + m;
                    if(d[nxt] + 1 < d[idx]){
                        d[idx] = d[nxt] + 1;
                    }
                }
            }
            for(ll i = 0; i < (ll)cur.size(); i++){
                ndp[i] = d[cur[i].first * m + cur[i].second];
            }
        }
        dp.swap(ndp);
    }
    ll ans = INF;
    for(ll i = 0; i < (ll)dp.size(); i++){
        if(dp[i] < ans){
            ans = dp[i];
        }
    }
    cout << ans << endl;
    return 0;
}
