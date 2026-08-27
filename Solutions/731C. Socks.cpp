#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

struct DSU{
    vector<ll> parent, sz;
    DSU(ll n){
        parent.resize(n+1);
        sz.assign(n+1, 1);
        for(ll i = 1; i <= n; i++) parent[i] = i;
    }
    ll find(ll x){
        if(parent[x] == x) return x;
        return parent[x] = find(parent[x]);
    }
    void unite(ll a, ll b){
        a = find(a); b = find(b);
        if(a == b) return;
        if(sz[a] < sz[b]) swap(a, b);
        parent[b] = a;
        sz[a] += sz[b];
    }
};

int main()
{
    fast;
    ll n, m, k; cin >> n >> m >> k;
    vector<ll> c(n+1);
    for(ll i = 1; i <= n; i++) cin >> c[i];
    DSU dsu(n);
    for(ll i = 0; i < m; i++){
        ll l, r; cin >> l >> r;
        dsu.unite(l, r);
    }
    map<ll, map<ll,ll>> comp;
    for(ll i = 1; i <= n; i++){
        comp[dsu.find(i)][c[i]]++;
    }
    ll ans = 0;
    for(auto& [root, colorCount] : comp){
        ll total = 0, mx = 0;
        for(auto& [color, cnt] : colorCount){
            total += cnt;
            mx = max(mx, cnt);
        }
        ans += total - mx;
    }
    cout << ans << endl;
    return 0;
}
