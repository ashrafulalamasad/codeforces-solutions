#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m; cin >> n >> m;
        vector<vector<pair<ll, ll>>> adj(n + 1);
        for(ll i = 0; i < m; i++){
            ll a, b, d; cin >> a >> b >> d;
            adj[a].push_back({b, d});
            adj[b].push_back({a, -d});
        }
        vector<ll> dist(n + 1, 0), vis(n + 1, 0);
        bool ok = true;
        for(ll i = 1; i <= n; i++){
            if(!vis[i]){
                vis[i] = 1; dist[i] = 0;
                queue<ll> q; q.push(i);
                while(!q.empty() && ok){
                    ll u = q.front();
                    q.pop();
                    for(auto edge : adj[u]){
                        ll v = edge.first;
                        ll w = edge.second;
                        if(!vis[v]){
                            vis[v] = 1;
                            dist[v] = dist[u] + w;
                            q.push(v);
                        }else if(dist[v] != dist[u] + w){
                            ok = false;
                            break;
                        }
                    }
                }
            }
            if(!ok) break;
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}
