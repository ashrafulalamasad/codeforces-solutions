#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, m; cin >> n >> m;
    vector<vector<ll>> adj(n + 1);
    for(ll i = 0; i < m; i++){
        ll u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<bool> vis(n + 1, 0);
    ll ans = 0;
    for(ll i = 1; i <= n; i++){
        if(vis[i]) continue;
        bool ok = true;
        queue<ll> q;
        q.push(i);
        vis[i] = 1;
        while(!q.empty()){
            ll u = q.front(); q.pop();
            if(adj[u].size() != 2) ok = false;
            for(auto v : adj[u]){
                if(!vis[v]){
                    vis[v] = 1;
                    q.push(v);
                }
            }
        }
        if(ok) ans++;
    }
    cout << ans << endl;
    return 0;
}
