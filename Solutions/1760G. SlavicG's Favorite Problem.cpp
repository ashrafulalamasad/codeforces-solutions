#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, a, b; cin >> n >> a >> b;
        vector<vector<pair<ll, ll>>> adj(n + 1);
        for(ll i = 0; i < n - 1; i++){
            ll u, v, w; cin >> u >> v >> w;
            adj[u].push_back({v, w}); adj[v].push_back({u, w});
        }
        vector<ll> par(n + 1, 0), d(n + 1, 0);
        vector<bool> vis(n + 1, false);
        queue<ll> q; q.push(b); vis[b] = true;
        while(!q.empty()){
            ll u = q.front(); q.pop();
            for(auto &e : adj[u]){
                if(!vis[e.first]){
                    vis[e.first] = true; par[e.first] = u;
                    d[e.first] = d[u] ^ e.second; q.push(e.first);
                }
            }
        }
        ll c = a;
        while(par[c] != b) c = par[c];
        bool ok = d[a] == 0;
        if(!ok){
            vector<ll> D;
            for(ll v = 1; v <= n; v++){
                if(v != b) D.push_back(d[v]);
            }
            sort(D.begin(), D.end()); vector<ll> vals;
            queue<ll> q2; q2.push(c);
            while(!q2.empty()){
                ll u = q2.front(); q2.pop();
                vals.push_back(d[u]);
                for(auto &e : adj[u]){
                    if(e.first != par[u]) q2.push(e.first);
                }
            }
            for(ll x : vals){
                if(binary_search(D.begin(), D.end(), d[a] ^ x)){
                    ok = true;
                    break;
                }
            }
        }
        if(ok){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
