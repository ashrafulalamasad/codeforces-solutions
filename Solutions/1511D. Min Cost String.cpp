#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, k; cin >> n >> k; vector<vector<ll>> edges(k);
    for(ll u = 0; u < k; u++){
        for(ll v = k - 1; v >= 0; v--) edges[u].push_back(v);
    }
    vector<ll> st; st.push_back(0);
    vector<ll> circuit;
    while(!st.empty()){
        ll u = st.back();
        if(!edges[u].empty()){
            ll v = edges[u].back();
            edges[u].pop_back();
            st.push_back(v);
        }else{
            circuit.push_back(u);
            st.pop_back();
        }
    }
    reverse(circuit.begin(), circuit.end());
    ll period = k * k;
    string ans = "";
    for(ll i = 0; i < n; i++){
        ll v = 0;
        if(i < circuit.size()) v = circuit[i];
        else v = circuit[i % period];
        ans += char('a' + v);
    }
    cout << ans << endl;
    return 0;
}
