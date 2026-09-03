#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, q; cin >> n >> q;
    vector<ll> par(n + 1, 0), sz(n + 1, 1), cent(n + 1), order;
    vector<vector<ll>> ch(n + 1);
    for(ll i = 2; i <= n; i++){
        cin >> par[i]; ch[par[i]].push_back(i);
    }
    order.push_back(1);
    for(ll i = 0; i < (ll)order.size(); i++){
        ll v = order[i];
        for(ll c : ch[v]) order.push_back(c);
    }
    for(ll i = n - 1; i >= 0; i--){
        ll v = order[i];
        ll heavy = 0;
        for(ll c : ch[v]){
            sz[v] += sz[c];
            if(sz[c] > sz[heavy]) heavy = c;
        }
        if(heavy == 0){
            cent[v] = v;
        }else{
            ll cur = cent[heavy];
            while(2 * (sz[v] - sz[cur]) > sz[v]) cur = par[cur];
            cent[v] = cur;
        }
    }
    while(q--){
        ll v; cin >> v;
        cout << cent[v] << endl;
    }
    return 0;
}
