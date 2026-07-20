#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll n, m;
vector<ll> adj[150001];
ll vis[150001];
ll comp_sz, edge_cnt;

void dfs(ll u){
    vis[u] = true;
    comp_sz++;
    edge_cnt += adj[u].size();
    for(ll v : adj[u]){
        if(!vis[v]) dfs(v);
    }
}

int main()
{
    fast;
    cin >> n >> m;
    for(ll i=0; i<m; i++){
        ll u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bool ok = true;
    for(ll i=1; i<=n; i++){
        if(!vis[i]){
            comp_sz = 0, edge_cnt = 0;
            dfs(i);
            if(edge_cnt != comp_sz*(comp_sz-1)){
                ok = false;
                break;
            }
        }
    }
    cout << (ok ? "YES" : "NO") << endl;
    return 0;
}
