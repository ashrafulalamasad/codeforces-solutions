#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<vector<ll>> adj(n + 1);
        for(ll i = 0; i < n - 1; i++){
            ll u, v; cin >> u >> v;
            adj[u].push_back(v); adj[v].push_back(u);
        }
        vector<ll> cnt(n + 1, 0), par(n + 1, 0), order;
        vector<ll> st = {1};
        while(!st.empty()){
            ll u = st.back(); st.pop_back();
            order.push_back(u);
            for(ll v : adj[u]){
                if(v != par[u]){
                    par[v] = u; st.push_back(v);
                }
            }
        }
        for(ll i = n - 1; i >= 0; i--){
            ll u = order[i];
            if(cnt[u] == 0) cnt[u] = 1;
            cnt[par[u]] += cnt[u];
        }
        ll q; cin >> q;
        while(q--){
            ll x, y; cin >> x >> y;
            cout << cnt[x] * cnt[y] << endl;
        }
    }
    return 0;
}
