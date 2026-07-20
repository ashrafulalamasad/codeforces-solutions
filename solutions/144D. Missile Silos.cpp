#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;
    ll n, m, s; cin >> n >> m >> s;
    vector<tuple<ll,ll,ll>> edges;
    vector<vector<pair<ll,ll>>> adj(n+1);
    for(ll i=0; i<m; i++){
        ll v, u, w; cin >> v >> u >> w;
        edges.emplace_back(v, u, w);
        adj[v].push_back({u, w});
        adj[u].push_back({v, w});
    }
    ll L; cin >> L;
    const ll INF = (ll)4e18;
    vector<ll> dist(n+1, INF);
    dist[s] = 0;
    priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>> pq;
    pq.push({0, (ll)s});
    while(!pq.empty()){
        auto cur = pq.top(); pq.pop();
        ll d = cur.first; ll v = cur.second;
        if(d != dist[v]) continue;
        for(auto &e: adj[v]){
            ll to = e.first; ll w = e.second;
            if(dist[to] > d + w){
                dist[to] = d + w;
                pq.push({dist[to], to});
            }
        }
    }
    ll ans = 0;
    for(ll i=1; i<=n; i++){
        if(dist[i] == L) ans++;
    }
    for(auto &ed: edges){
        ll u, v; ll w;
        tie(u, v, w) = ed;
        ll du = dist[u];
        ll dv = dist[v];
        if(du < L){
            ll x = L - du;
            if(x > 0 && x < w){
                ll other = dv + (w - x);
                if(other > L) ans++;
            }
        }
        if(dv < L){
            ll x = L - dv;
            if(x > 0 && x < w){
                ll other = du + (w - x);
                if(other > L) ans++;
            }
        }
        if(du < L && dv < L){
            if(du + dv + w == 2 * L) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
