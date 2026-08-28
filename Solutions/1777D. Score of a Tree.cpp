#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    const ll MOD = 1000000007;
    tc{
        ll n; cin >> n;
        vector<vector<ll>> adj(n + 1);
        for(ll i = 0; i < n - 1; i++){
            ll u, v; cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<ll> par(n + 1, 0), order, height(n + 1, 0);
        order.reserve(n); vector<ll> stk;
        stk.push_back(1); par[1] = -1;
        while(!stk.empty()){
            ll u = stk.back(); stk.pop_back();
            order.push_back(u);
            for(ll v : adj[u]){
                if(v == par[u]) continue;
                par[v] = u;
                stk.push_back(v);
            }
        }
        for(ll i = n - 1; i >= 0; i--){
            ll u = order[i];
            if(par[u] != -1) height[par[u]] = max(height[par[u]], height[u] + 1);
        }
        ll total = 0;
        for(ll u = 1; u <= n; u++) total = (total + height[u] + 1) % MOD;
        ll pw = 1;
        for(ll i = 0; i < n - 1; i++) pw = pw * 2 % MOD;
        cout << total * pw % MOD << endl;
    }
    return 0;
}
