#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, k; cin >> n >> k; vector<vector<ll>> adj(n + 1);
    for(ll i = 0; i < n - 1; i++){
        ll u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<ll> par(n + 1, 0), dep(n + 1, 0), sz(n + 1, 1), order;
    order.push_back(1);
    for(ll i = 0; i < (ll)order.size(); i++){
        ll u = order[i];
        for(ll v : adj[u]){
            if(v != par[u]){
                par[v] = u;
                dep[v] = dep[u] + 1;
                order.push_back(v);
            }
        }
    }
    for(ll i = n - 1; i >= 1; i--){
        ll u = order[i];
        sz[par[u]] += sz[u];
    }
    vector<ll> val(n);
    for(ll i = 0; i < n; i++){
        ll u = order[i];
        val[i] = dep[u] - sz[u] + 1;
    }
    sort(val.rbegin(), val.rend());
    ll ans = 0;
    for(ll i = 0; i < k; i++) ans += val[i];
    cout << ans << endl;
    return 0;
}
