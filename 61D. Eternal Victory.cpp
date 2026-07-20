#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    vector<vector<pair<ll, ll>>> adj(n+1);
    ll total_weight = 0;
    for(ll i = 0; i < n-1; i++) {
        ll u, v, w; cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
        total_weight += w;
    }
    function<pair<ll, ll>(ll, ll, ll)> dfs = [&](ll node, ll parent, ll dist) -> pair<ll, ll> {
        pair<ll, ll> farthest = {node, dist};
        for(auto [neighbor, weight] : adj[node]) {
            if(neighbor != parent) {
                auto [farthest_node, farthest_dist] = dfs(neighbor, node, dist + weight);
                if(farthest_dist > farthest.second) {
                    farthest = {farthest_node, farthest_dist};
                }
            }
        }
        return farthest;
    };
    auto [far_node, max_dist] = dfs(1, -1, 0);
    cout << 2 * total_weight - max_dist << endl;
    return 0;
}
