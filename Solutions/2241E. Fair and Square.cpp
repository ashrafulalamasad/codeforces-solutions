#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, ans = 0; cin >> n; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        vector<vector<ll>> adj(n);
        for(ll i = 0; i < n - 1; i++){
            ll u, v; cin >> u >> v; u--; v--;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<ll> parent(n, -1), sub(n, 1), order, st(1, 0); parent[0] = -2;
        while(st.size()){
            ll u = st.back(); st.pop_back(); order.push_back(u);
            for(ll v : adj[u]){
                if(parent[v] == -1){
                    parent[v] = u; st.push_back(v);
                }
            }
        }
        for(ll i = n - 1; i >= 0; i--){
            ll u = order[i];
            for(ll v : adj[u]) if(parent[v] == u) sub[u] += sub[v];
        }
        auto isSquare = [&](ll x) -> bool {
            ll r = sqrtl(x);
            while((r + 1) * (r + 1) <= x) r++; while(r * r > x) r--;
            return r * r == x;
        };
        for(ll m = 0; m < n; m++) if(isSquare(a[m])){
            ll sum = 0, sumPair = 0, sumTriple = 0;
            for(ll v : adj[m]){
                ll sz = parent[v] == m ? sub[v] : n - sub[m];
                sumTriple += sumPair * sz; sumPair += sum * sz; sum += sz;
            }
            ans += sumPair + sumTriple;
        }
        cout << ans << endl;
    }
    return 0;
}
