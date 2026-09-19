#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll MOD = 998244353;
    tc{
        ll n; cin >> n; vector<vector<ll>> g(n);
        for(ll i = 0; i < n - 1; i++){
            ll u, v; cin >> u >> v; u--; v--;
            g[u].push_back(v); g[v].push_back(u);
        }
        vector<ll> st, order, parent(n, -1);
        order.reserve(n); st.push_back(0); parent[0] = -2;
        while(st.size() > 0){
            ll v = st.back(); st.pop_back();
            order.push_back(v);
            for(ll i = 0; i < (ll)g[v].size(); i++){
                ll to = g[v][i];
                if(parent[to] == -1){
                    parent[to] = v;
                    st.push_back(to);
                }
            }
        }
        vector<ll> dp(n, 1); ll ans = 1;
        for(ll i = n - 1; i >= 0; i--){
            ll v = order[i], prod = 1;
            for(ll j = 0; j < (ll)g[v].size(); j++){
                ll to = g[v][j];
                if(parent[to] == v){
                    prod = prod * (dp[to] + 1) % MOD;
                }
            }
            dp[v] = prod;
            ans = (ans + prod) % MOD;
        }
        cout << ans << endl;
    }
    return 0;
}
