#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

vector<int> adj[200005];
int col[200005], vis[200005];

void bfs_dfs(int v, int c, vector<int>& comp){
    vis[v] = 1;
    queue<int> q;
    q.push(v);
    comp.push_back(v);
    while(!q.empty()){
        int u = q.front(); q.pop();
        for(auto to : adj[u])
            if(!vis[to] && col[to] == c){
                vis[to] = 1;
                comp.push_back(to);
                q.push(to);
            }
    }
}

vector<int> cadj[200005];

pair<int,int> bfs(int start, int nc){
    vector<int> dist(nc, -1);
    queue<int> q;
    q.push(start);
    dist[start] = 0;
    int far = start;
    while(!q.empty()){
        int u = q.front(); q.pop();
        far = u;
        for(auto to : cadj[u]){
            if(dist[to] == -1){
                dist[to] = dist[u] + 1;
                q.push(to);
            }
        }
    }
    return {far, dist[far]};
}

int main()
{
    fast;
    ll n; cin >> n;
    for(ll i = 0; i < n; i++) cin >> col[i + 1];
    for(ll i = 0; i < n - 1; i++){
        ll u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<vector<int>> comps;
    memset(vis, 0, sizeof(vis));
    for(ll i = 1; i <= n; i++){
        if(!vis[i]){
            vector<int> comp;
            bfs_dfs(i, col[i], comp);
            comps.push_back(comp);
        }
    }
    int nc = comps.size();
    vector<int> comp_id(n + 1);
    for(int i = 0; i < nc; i++)
        for(auto v : comps[i])
            comp_id[v] = i;
    for(int i = 0; i < nc; i++)
        cadj[i].clear();
    for(int i = 1; i <= n; i++){
        for(auto to : adj[i]){
            if(comp_id[i] != comp_id[to]){
                cadj[comp_id[i]].push_back(comp_id[to]);
            }
        }
    }
    auto p1 = bfs(0, nc);
    auto p2 = bfs(p1.first, nc);
    cout << (p2.second + 1) / 2 << endl;
    return 0;
}
