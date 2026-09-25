#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> l(n), r(n);
        for(ll i = 0; i < n; i++) cin >> l[i] >> r[i];
        vector<vector<ll>> g(n);
        for(ll i = 0; i < n - 1; i++){
            ll u, v; cin >> u >> v;
            u--; v--;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        vector<ll> parent(n, -1);
        parent[0] = 0;
        vector<ll> st = {0}, order;
        while(!st.empty()){
            ll v = st.back();
            st.pop_back();
            order.push_back(v);
            for(ll u : g[v]){
                if(parent[u] == -1){
                    parent[u] = v;
                    st.push_back(u);
                }
            }
        }
        vector<ll> dp0(n, 0), dp1(n, 0);
        for(ll i = n - 1; i >= 0; i--){
            ll v = order[i];
            for(ll u : g[v]){
                if(u == parent[v]) continue;
                dp0[v] += max(dp0[u] + abs(l[v] - l[u]), dp1[u] + abs(l[v] - r[u]));
                dp1[v] += max(dp0[u] + abs(r[v] - l[u]), dp1[u] + abs(r[v] - r[u]));
            }
        }
        cout << max(dp0[0], dp1[0]) << endl;
    }
    return 0;
}
