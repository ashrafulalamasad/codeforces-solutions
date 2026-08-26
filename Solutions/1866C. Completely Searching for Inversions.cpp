#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<vector<pair<ll, ll>>> adj(n + 1);
    for(ll i = 1; i <= n; i++){
        ll s; cin >> s;
        for(ll j = 0; j < s; j++){
            ll l, w; cin >> l >> w;
            adj[i].push_back({l, w});
        }
    }
    vector<ll> order, ptr(n + 1, 0), state(n + 1, 0);
    stack<ll> st; st.push(1); state[1] = 1;
    while(!st.empty()){
        ll u = st.top();
        if(ptr[u] < (ll)adj[u].size()){
            auto edge = adj[u][ptr[u]++];
            ll v = edge.first;
            if(state[v] == 0){
                state[v] = 1;
                st.push(v);
            }
        }else{
            order.push_back(u);
            state[u] = 2;
            st.pop();
        }
    }
    const ll MOD = 998244353;
    vector<ll> L(n + 1, 0), C1(n + 1, 0), C0(n + 1, 0), I(n + 1, 0);
    for(ll u : order){
        ll cur_L = 0, cur_C1 = 0, cur_C0 = 0, cur_I = 0;
        for(auto& edge : adj[u]){
            ll v = edge.first;
            ll w = edge.second;
            ll p_L = (1 + L[v]) % MOD;
            ll p_C1 = (w + C1[v]) % MOD;
            ll p_C0 = (1 - w + C0[v]) % MOD;
            ll p_I = (I[v] + w * C0[v]) % MOD;
            cur_I = (cur_I + p_I + cur_C1 * p_C0) % MOD;
            cur_L = (cur_L + p_L) % MOD;
            cur_C1 = (cur_C1 + p_C1) % MOD;
            cur_C0 = (cur_C0 + p_C0) % MOD;
        }
        L[u] = cur_L;
        C1[u] = cur_C1;
        C0[u] = cur_C0;
        I[u] = cur_I;
    }
    cout << I[1] << endl;
    return 0;
}
