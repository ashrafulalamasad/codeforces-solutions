#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k;
        vector<ll> c(n), has(n, 0), indeg(n, 0);
        for(ll i = 0; i < n; i++) cin >> c[i];
        for(ll i = 0; i < k; i++){
            ll p; cin >> p; p--;
            has[p] = 1;
        }
        vector<vector<ll>> need(n), adj(n);
        for(ll i = 0; i < n; i++){
            ll m; cin >> m;
            indeg[i] = m;
            for(ll j = 0; j < m; j++){
                ll e; cin >> e; e--;
                need[i].push_back(e);
                adj[e].push_back(i);
            }
        }
        vector<ll> dp(n, 0), acc(n, 0); queue<ll> q;
        for(ll i = 0; i < n; i++) if(indeg[i] == 0) q.push(i);
        while(!q.empty()){
            ll u = q.front(); q.pop();
            if(has[u]) dp[u] = 0;
            else if(need[u].empty()) dp[u] = c[u];
            else dp[u] = min(c[u], acc[u]);
            for(ll v : adj[u]){
                acc[v] += dp[u];
                indeg[v]--;
                if(indeg[v] == 0) q.push(v);
            }
        }
        for(ll i = 0; i < n; i++) cout << dp[i] << " ";
        cout << endl;
    }
    return 0;
}
