#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, r1, r2; cin >> n >> r1 >> r2;
    vector<vector<ll>> g(n + 1);
    for(ll i = 1; i <= n; i++){
        if(i == r1) continue;
        ll p; cin >> p;
        g[i].push_back(p);
        g[p].push_back(i);
    }
    vector<ll> par(n + 1, 0), vis(n + 1, 0);
    queue<ll> q; q.push(r2); vis[r2] = 1;
    while(q.empty() == 0){
        ll u = q.front(); q.pop();
        for(ll i = 0; i < g[u].size(); i++){
            ll v = g[u][i];
            if(vis[v] == 0){
                vis[v] = 1; par[v] = u; q.push(v);
            }
        }
    }
    for(ll i = 1; i <= n; i++){
        if(i == r2){
            continue;
        }
        cout << par[i] << " ";
    }
    cout << endl;
    return 0;
}
