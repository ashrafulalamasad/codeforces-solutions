#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, m, k; cin >> n >> m >> k;
    vector<tuple<ll,ll,ll>> edges(m);
    for(ll i = 0; i < m; i++){
        ll u, v, l; cin >> u >> v >> l;
        edges[i] = {u, v, l};
    }
    set<ll> storage;
    for(ll i = 0; i < k; i++){
        ll a; cin >> a;
        storage.insert(a);
    }
    ll ans = LLONG_MAX;
    for(auto& [u, v, l] : edges){
        bool us = storage.count(u), vs = storage.count(v);
        if(us != vs) ans = min(ans, l);
    }
    if(ans == LLONG_MAX) cout << -1 << endl;
    else cout << ans << endl;
    return 0;
}
