#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<vector<ll>> adj(n);
        for(ll i = 0; i < n - 1; i++){
            ll u, v; cin >> u >> v;
            adj[u].push_back(v); adj[v].push_back(u);
        }
        vector<ll> par(n, 0), sz(n, 1), top(n, 0), tin(n, 0), order, st;
        vector<bool> vis(n, false);
        st.push_back(0); vis[0] = true; ll timer = 0;
        while(!st.empty()){
            ll u = st.back(); st.pop_back();
            tin[u] = timer++;
            order.push_back(u);
            for(ll v : adj[u]){
                if(!vis[v]){
                    vis[v] = true; par[v] = u;
                    top[v] = (u == 0 ? v : top[u]);
                    st.push_back(v);
                }
            }
        }
        for(ll i = n - 1; i >= 1; i--){
            ll u = order[i];
            sz[par[u]] += sz[u];
        }
        auto isAnc = [&](ll u, ll v) -> bool { return tin[u] <= tin[v] && tin[v] < tin[u] + sz[u]; };
        vector<ll> g(n + 2, 0);
        g[1] = n * (n - 1) / 2;
        for(ll v : adj[0]) g[1] -= sz[v] * (sz[v] - 1) / 2;
        ll a = 0, b = 0;
        for(ll x = 1; x < n; x++){
            if(!isAnc(x, a) && !isAnc(x, b)){
                if(top[x] == top[a]){
                    if(!isAnc(a, x)) break;
                    a = x;
                }else if(top[x] == top[b]){
                    if(!isAnc(b, x)) break;
                    b = x;
                }else if(a == 0){
                    a = x;
                }else if(b == 0){
                    b = x;
                }else break;
            }
            ll ca = (a == 0 ? n - sz[top[b]] : sz[a]);
            ll cb = (b == 0 ? n - sz[top[a]] : sz[b]);
            g[x + 1] = ca * cb;
        }
        cout << n * (n - 1) / 2 - g[1];
        for(ll k = 1; k <= n; k++) cout << " " << g[k] - g[k + 1];
        cout << endl;
    }
    return 0;
}
