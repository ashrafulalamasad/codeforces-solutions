#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<vector<ll>> graph(n + 1);
        for(ll i = 1; i < n; i++){
            ll u, v; cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        vector<ll> parent(n + 1), depth(n + 1), order;
        order.push_back(1);
        for(ll i = 0; i < (ll)order.size(); i++){
            ll u = order[i];
            for(ll v : graph[u]) if(v != parent[u]){
                parent[v] = u;
                depth[v] = depth[u] + 1;
                order.push_back(v);
            }
        }
        vector<ll> maximum(n + 1);
        for(ll i = n - 1; i >= 0; i--){
            ll u = order[i];
            maximum[u] = depth[u];
            for(ll v : graph[u]) if(parent[v] == u) maximum[u] = max(maximum[u], maximum[v]);
        }
        vector<ll> difference(n + 2);
        ll deepest = 0;
        for(ll u = 1; u <= n; u++){
            difference[depth[u]]++;
            difference[maximum[u] + 1]--;
            deepest = max(deepest, maximum[u]);
        }
        ll alive = difference[0], answer = n;
        for(ll d = 1; d <= deepest; d++){
            alive += difference[d];
            answer = min(answer, n - alive);
        }
        cout << answer << endl;
    }
    return 0;
}
