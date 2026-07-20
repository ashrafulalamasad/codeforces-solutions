#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int INF = 1e9;
int cap[205][205], par[205], pushed[205], ans[105][105], orig[205][205];

int bfs(int s, int t){
    memset(pushed, 0, sizeof(pushed));
    memset(par, 0, sizeof(par));
    pushed[s] = INF;
    queue<int> q; q.push(s);
    while(!q.empty()){
        int v = q.front(); q.pop();
        for(int i=0; i<205; i++)
            if(cap[v][i] > 0 && !pushed[i])
                pushed[i] = min(pushed[v], cap[v][i]), par[i] = v, q.push(i);
    }
    return pushed[t];
}

int maxflow(int s, int t){
    int total = 0, f;
    while((f = bfs(s, t))){
        for(int v = t; v != s; v = par[v]){
            cap[par[v]][v] -= f;
            cap[v][par[v]] += f;
        }
        total += f;
    }
    return total;
}

int main()
{
    fast;
    int n, m; cin >> n >> m;
    vector<int> a(n+1), b(n+1);
    int sa = 0, sb = 0, s = 0, t = 2*n+1;
    for(int i=1; i<=n; i++) cin >> a[i], sa += a[i], cap[s][i] = a[i];
    for(int i=1; i<=n; i++) cin >> b[i], sb += b[i], cap[i+n][t] = b[i];
    for(int i=1; i<=n; i++) cap[i][i+n] = INF, orig[i][i+n] = INF;
    for(int i=0; i<m; i++){
        int u, v; cin >> u >> v;
        cap[u][v+n] = INF; cap[v][u+n] = INF;
        orig[u][v+n] = INF; orig[v][u+n] = INF;
    }
    if(sa != sb || maxflow(s, t) != sa){
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            ans[i][j] = orig[i][j+n] - cap[i][j+n];
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++) cout << ans[i][j] << " ";
        cout << endl;
    }
    return 0;
}
