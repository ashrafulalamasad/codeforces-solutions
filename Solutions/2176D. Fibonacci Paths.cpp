#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll MOD = 998244353;

struct Edge{
    ll u, v, s;
};

int main()
{
    fast;
    tc{
        ll n, m; cin >> n >> m; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        vector<Edge> edges(m);
        for(ll i = 0; i < m; i++){
            ll u, v; cin >> u >> v;
            u--; v--;
            edges[i] = {u, v, a[u] + a[v]};
        }
        sort(edges.begin(), edges.end(), [](const Edge& x, const Edge& y){
            return x.s > y.s;
        });
        vector<map<ll, ll>> sumdp(n);
        ll ans = 0;
        for(auto& e : edges){
            ll curdp = (sumdp[e.v][e.s] + 1) % MOD;
            sumdp[e.u][a[e.v]] = (sumdp[e.u][a[e.v]] + curdp) % MOD;
            ans = (ans + curdp) % MOD;
        }
        cout << ans << endl;
    }
    return 0;
}
