#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;
    tc{
        ll n, m; cin >> n >> m;
        vector<vector<ll>> adj(n + 1);
        vector<ll> deg(n + 1, 0);
        for(ll i = 0; i < m; ++i){
            ll u, v; cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
            ++deg[u]; ++deg[v];
        }
        ll center = 0;
        for(ll v = 1; v <= n; ++v){
            if(deg[v] == 1) continue;
            bool ok = true;
            for(auto u : adj[v]){
                if(deg[u] == 1){
                    ok = false;
                    break;
                }
            }
            if(ok){
                center = v;
                break;
            }
        }
        ll x = deg[center];
        ll y = deg[adj[center][0]] - 1;
        cout << x << " " << y << endl;
    }
    return 0;
}
