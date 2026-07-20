#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    int n, m, k; cin >> n >> m >> k;
    vector<vector<int>> adj(n+1);
    for(int i=0; i<m; i++){
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    set<tuple<int,int,int>> bad;
    for(int i=0; i<k; i++){
        int a, b, c; cin >> a >> b >> c;
        bad.insert({a, b, c});
    }
    ll d[3005][3005];
    ll parent_prev[3005][3005];
    ll parent_cur[3005][3005];
    for(int i=0; i<=n; i++)
        for(int j=0; j<=n; j++)
            d[i][j] = 0;
    queue<pair<ll,ll>> q;
    for(int v : adj[1]){
        d[1][v] = 1;
        parent_prev[1][v] = 0;
        parent_cur[1][v] = 0;
        q.push({1, v});
    }
    pair<ll,ll> found = {-1, -1};
    while(!q.empty()){
        auto [prev, cur] = q.front(); q.pop();
        if(cur == n){
            found = {prev, cur};
            break;
        }
        for(int nxt : adj[cur]){
            if(d[cur][nxt] == 0){
                if(bad.count({prev, cur, nxt})) continue;
                d[cur][nxt] = d[prev][cur] + 1;
                parent_prev[cur][nxt] = prev;
                parent_cur[cur][nxt] = cur;
                q.push({cur, nxt});
            }
        }
    }
    if(found.first == -1){
        cout << -1 << endl;
        return 0;
    }
    vector<ll> path;
    ll a = found.first, b = found.second;
    while(a != 0 || b != 0){
        path.push_back(b);
        ll pa = parent_prev[a][b];
        ll pb = parent_cur[a][b];
        a = pa;
        b = pb;
    }
    path.push_back(1);
    reverse(path.begin(), path.end());
    cout << (ll)path.size() - 1 << endl;
    for(ll i=0; i<(ll)path.size(); i++) cout << path[i] << " ";
    cout << endl;
    return 0;
}
