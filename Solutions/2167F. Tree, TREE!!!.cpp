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
        vector<vector<ll>> adj(n + 1);
        for(ll i = 0; i < n - 1; i++){
            ll u, v; cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<ll> sz(n + 1, 1), parent(n + 1, 0), order;
        vector<bool> visited(n + 1, false);
        queue<ll> q; q.push(1); visited[1] = true;
        while(!q.empty()){
            ll u = q.front();
            q.pop();
            order.push_back(u);
            for(ll v : adj[u]){
                if(!visited[v]){
                    visited[v] = true;
                    parent[v] = u;
                    q.push(v);
                }
            }
        }
        for(ll i = n - 1; i >= 0; i--){
            ll u = order[i];
            if(u != 1){
                sz[parent[u]] += sz[u];
            }
        }
        ll ans = 0;
        ll threshold = n - k;
        for(ll u = 1; u <= n; u++){
            ans += 1;
            for(ll v : adj[u]){
                ll comp_size = (v == parent[u]) ? (n - sz[u]) : sz[v];
                if(comp_size <= threshold){
                    ans += comp_size;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
