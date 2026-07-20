#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll parent[2005];
vector<pair<ll,ll>> adj[2005];
ll dist_matrix[2005][2005];
ll tree_dist[2005];
ll find(ll i){ return parent[i] == i ? i : parent[i] = find(parent[i]); }

void dfs(ll u, ll p, ll start){
    for(auto& [v, w] : adj[u]){
        if(v != p){
            tree_dist[v] = tree_dist[u] + w;
            dist_matrix[start][v] = tree_dist[v];
            dfs(v, u, start);
        }
    }
}

int main()
{
    fast;
    ll n; cin >> n;
    vector<tuple<ll,ll,ll>> edges;
    vector<vector<ll>> inp(n, vector<ll>(n));
    for(ll i = 0; i < n; i++)
        for(ll j = 0; j < n; j++){
            cin >> inp[i][j];
            if(i == j && inp[i][j] != 0){ cout << "NO\n"; return 0; }
            if(i != j && inp[i][j] <= 0){ cout << "NO\n"; return 0; }
            if(i < j) edges.push_back({inp[i][j], i, j});
        }
    for(ll i = 0; i < n; i++)
        for(ll j = 0; j < n; j++)
            if(inp[i][j] != inp[j][i]){ cout << "NO\n"; return 0; }
    sort(edges.begin(), edges.end());
    for(ll i = 0; i < n; i++) parent[i] = i;
    ll cnt = 0;
    for(auto& [w, u, v] : edges){
        ll ru = find(u), rv = find(v);
        if(ru != rv){
            parent[ru] = rv;
            adj[u].push_back({v, w});
            adj[v].push_back({u, w});
            cnt++;
        }
    }
    if(n > 1 && cnt != n-1){ cout << "NO\n"; return 0; }
    for(ll i = 0; i < n; i++){
        tree_dist[i] = 0;
        dfs(i, -1, i);
        for(ll j = 0; j < n; j++)
            if(dist_matrix[i][j] != inp[i][j]){ cout << "NO\n"; return 0; }
    }
    cout << "YES" << endl;
    return 0;
}
