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
        vector<pair<ll, ll>> edges(m);
        vector<ll> deg(n + 1, 0);
        for(ll i = 0; i < m; i++){
            ll u, v; cin >> u >> v;
            edges[i] = {u, v};
            adj[u].push_back({v, i});
            adj[v].push_back({u, i});
            deg[u]++;
            deg[v]++;
        }
        ll answer = 0;
        vector<ll> odd;
        for(ll i = 1; i <= n; i++){
            if(deg[i] % 2 == 0){
                answer++;
            }else{
                odd.push_back(i);
            }
        }
        ll total = m;
        for(ll i = 0; i + 1 < (ll)odd.size(); i += 2){
            ll u = odd[i];
            ll v = odd[i + 1];
            adj[u].push_back({v, total});
            adj[v].push_back({u, total});
            total++;
        }
        vector<ll> used(total, 0);
        vector<ll> ptr(n + 1, 0);
        vector<pair<ll, ll>> oriented = edges;
        for(ll s = 1; s <= n; s++){
            while(true){
                while(ptr[s] < (ll)adj[s].size() && used[adj[s][ptr[s]].second]){
                    ptr[s]++;
                }
                if(ptr[s] == (ll)adj[s].size()){
                    break;
                }
                ll v = s;
                while(true){
                    while(ptr[v] < (ll)adj[v].size() && used[adj[v][ptr[v]].second]){
                        ptr[v]++;
                    }
                    if(ptr[v] == (ll)adj[v].size()){
                        break;
                    }
                    ll to = adj[v][ptr[v]].first;
                    ll id = adj[v][ptr[v]].second;
                    used[id] = 1;
                    ptr[v]++;
                    if(id < m){
                        oriented[id] = {v, to};
                    }
                    v = to;
                }
            }
        }
        cout << answer << endl;
        for(ll i = 0; i < m; i++){
            cout << oriented[i].first << " " << oriented[i].second << endl;
        }
    }
    return 0;
}
