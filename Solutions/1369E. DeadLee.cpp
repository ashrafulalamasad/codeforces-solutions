#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, m; cin >> n >> m; vector<ll> w(n + 1);
    for(ll i = 1; i <= n; i++) cin >> w[i];
    vector<ll> x(m + 1), y(m + 1), deg(n + 1, 0);
    vector<vector<ll>> adj(n + 1);
    for(ll i = 1; i <= m; i++){
        cin >> x[i] >> y[i];
        adj[x[i]].push_back(i);
        adj[y[i]].push_back(i);
        deg[x[i]]++; deg[y[i]]++;
    }
    queue<ll> q;
    for(ll i = 1; i <= n; i++){
        if(deg[i] > 0 && deg[i] <= w[i]){
            q.push(i);
        }
    }
    vector<bool> removed(m + 1, false);
    vector<ll> ptr(n + 1, 0), rev; rev.reserve(m);
    while(!q.empty() && (ll)rev.size() < m){
        ll v = q.front(); q.pop();
        if(deg[v] == 0 || deg[v] > w[v]){
            continue;
        }
        while(ptr[v] < (ll)adj[v].size() && removed[adj[v][ptr[v]]]){
            ptr[v]++;
        }
        if(ptr[v] == (ll)adj[v].size()){
            continue;
        }
        ll e = adj[v][ptr[v]];
        ptr[v]++; removed[e] = true;
        rev.push_back(e);
        ll u = x[e], to = y[e];
        deg[u]--; deg[to]--;
        if(deg[u] > 0 && deg[u] <= w[u]){
            q.push(u);
        }
        if(deg[to] > 0 && deg[to] <= w[to]){
            q.push(to);
        }
    }
    if((ll)rev.size() < m){
        cout << "DEAD" << endl;
    }else{
        cout << "ALIVE" << endl;
        for(ll i = m - 1; i >= 0; i--){
            cout << rev[i] << ' ';
        }
        cout << endl;
    }
    return 0;
}
