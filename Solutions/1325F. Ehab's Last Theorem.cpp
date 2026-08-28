#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, m; cin >> n >> m; vector<vector<ll>> adj(n + 1);
    for(ll i = 0; i < m; i++){
        ll x, y; cin >> x >> y;
        adj[x].push_back(y); adj[y].push_back(x);
    }
    ll k = 1, cu = -1, cv = -1;
    while(k * k < n) k++;
    vector<ll> dep(n + 1, -1), par(n + 1, 0), ptr(n + 1, 0), stk;
    dep[1] = 0; stk.push_back(1);
    while(!stk.empty() && cu == -1){
        ll u = stk.back();
        if(ptr[u] < (ll)adj[u].size()){
            ll w = adj[u][ptr[u]++];
            if(dep[w] == -1){
                dep[w] = dep[u] + 1;
                par[w] = u; stk.push_back(w);
            }else if(w != par[u] && dep[w] < dep[u] && dep[u] - dep[w] + 1 >= k){
                cu = u; cv = w;
            }
        }else{
            stk.pop_back();
        }
    }
    if(cu != -1){
        vector<ll> cyc; ll x = cu;
        while(x != cv){
            cyc.push_back(x);
            x = par[x];
        }
        cyc.push_back(cv);
        cout << 2 << endl;
        cout << (ll)cyc.size() << endl;
        for(ll w : cyc) cout << w << " ";
        cout << endl;
    }else{
        vector<vector<ll>> grp(k - 1);
        for(ll w = 1; w <= n; w++) grp[dep[w] % (k - 1)].push_back(w);
        ll bi = 0;
        for(ll i = 0; i < k - 1; i++){
            if(grp[i].size() > grp[bi].size()) bi = i;
        }
        cout << 1 << endl;
        for(ll i = 0; i < k; i++) cout << grp[bi][i] << " ";
        cout << endl;
    }
    return 0;
}
