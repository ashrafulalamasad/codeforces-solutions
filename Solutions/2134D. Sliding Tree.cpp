#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<vector<ll>> adj(n + 1);
        for(ll i = 0; i < n - 1; i++){
            ll u, v; cin >> u >> v;
            adj[u].push_back(v); adj[v].push_back(u);
        }
        auto traverse = [&](ll start, vector<ll>& parent, vector<ll>& dist){
            queue<ll> q; q.push(start); dist[start] = 0;
            while(!q.empty()){
                ll u = q.front(); q.pop();
                for(ll v : adj[u]){
                    if(v != parent[u]){
                        parent[v] = u;
                        dist[v] = dist[u] + 1;
                        q.push(v);
                    }
                }
            }
        };
        vector<ll> parent(n + 1, -1), dist(n + 1, 0);
        traverse(1, parent, dist);
        ll x = 1;
        for(ll i = 1; i <= n; i++){
            if(dist[i] > dist[x]){
                x = i;
            }
        }
        parent.assign(n + 1, -1); dist.assign(n + 1, 0);
        traverse(x, parent, dist); ll y = x;
        for(ll i = 1; i <= n; i++){
            if(dist[i] > dist[y]){
                y = i;
            }
        }
        if(dist[y] == n - 1){
            cout << -1 << endl;
            continue;
        }
        vector<bool> on_diameter(n + 1, false);
        for(ll u = y; u != -1; u = parent[u]){
            on_diameter[u] = true;
        }
        bool printed = false;
        for(ll b = 1; b <= n && !printed; b++){
            if(!on_diameter[b]){
                continue;
            }
            for(ll c : adj[b]){
                if(!on_diameter[c]){
                    cout << parent[b] << " " << b << " " << c << endl;
                    printed = true;
                    break;
                }
            }
        }
    }
    return 0;
}
