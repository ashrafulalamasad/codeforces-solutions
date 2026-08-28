#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll INF = LLONG_MAX / 4;

void dijkstra(ll src, vector<vector<pair<ll, ll>>>& adj, vector<ll>& horse, vector<array<ll, 2>>& dist){
    ll n = adj.size() - 1;
    for(ll i = 1; i <= n; i++) dist[i] = {INF, INF};
    priority_queue<array<ll, 3>, vector<array<ll, 3>>, greater<array<ll, 3>>> pq;
    dist[src][0] = 0; pq.push({0, src, 0});
    while(!pq.empty()){
        array<ll, 3> cur = pq.top(); pq.pop();
        ll dd = cur[0], u = cur[1], h = cur[2];
        if(dd > dist[u][h]) continue;
        if(h == 0 && horse[u] && dist[u][1] > dd){
            dist[u][1] = dd;
            pq.push({dd, u, 1});
        }
        for(auto& e : adj[u]){
            ll w = h ? e.second / 2 : e.second;
            if(dist[e.first][h] > dd + w){
                dist[e.first][h] = dd + w;
                pq.push({dd + w, e.first, h});
            }
        }
    }
}

int main()
{
    fast;
    tc{
        ll n, m, h; cin >> n >> m >> h;
        vector<ll> horse(n + 1, 0);
        for(ll i = 0; i < h; i++){
            ll x; cin >> x;
            horse[x] = 1;
        }
        vector<vector<pair<ll, ll>>> adj(n + 1);
        for(ll i = 0; i < m; i++){
            ll u, v, w; cin >> u >> v >> w;
            adj[u].push_back({v, w});
            adj[v].push_back({u, w});
        }
        vector<array<ll, 2>> d1(n + 1), d2(n + 1);
        dijkstra(1, adj, horse, d1);
        dijkstra(n, adj, horse, d2);
        ll ans = INF;
        for(ll v = 1; v <= n; v++){
            ll x = min(d1[v][0], d1[v][1]), y = min(d2[v][0], d2[v][1]);
            if(x < INF && y < INF) ans = min(ans, max(x, y));
        }
        if(ans == INF) cout << -1 << endl;
        else cout << ans << endl;
    }
    return 0;
}
