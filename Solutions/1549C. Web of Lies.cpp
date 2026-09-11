#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, m, bad = 0; cin >> n >> m;
    vector<ll> deg(n + 1, 0), weak(n + 1, 0);
    for(ll i = 0; i < m; i++){
        ll u, v; cin >> u >> v;
        deg[u]++; deg[v]++;
        if(u < v) weak[v]++;
        else weak[u]++;
    }
    for(ll i = 1; i <= n; i++){
        if(weak[i] != deg[i]) bad++;
    }
    ll q; cin >> q;
    while(q--){
        ll tp; cin >> tp;
        if(tp == 1){
            ll u, v; cin >> u >> v;
            if(weak[u] != deg[u]) bad--;
            if(weak[v] != deg[v]) bad--;
            deg[u]++; deg[v]++;
            if(u < v) weak[v]++;
            else weak[u]++;
            if(weak[u] != deg[u]) bad++;
            if(weak[v] != deg[v]) bad++;
        }else if(tp == 2){
            ll u, v; cin >> u >> v;
            if(weak[u] != deg[u]) bad--;
            if(weak[v] != deg[v]) bad--;
            deg[u]--;
            deg[v]--;
            if(u < v) weak[v]--;
            else weak[u]--;
            if(weak[u] != deg[u]) bad++;
            if(weak[v] != deg[v]) bad++;
        }else cout << n - bad << endl;
    }
    return 0;
}
