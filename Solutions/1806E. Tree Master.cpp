#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, q; cin >> n >> q;
    vector<ll> a(n + 1), par(n + 1, 0), dep(n + 1, 0), id(n + 1, 0), sz(n + 1, 0);
    for(ll i = 1; i <= n; i++) cin >> a[i];
    for(ll i = 2; i <= n; i++) cin >> par[i];
    for(ll i = 1; i <= n; i++){
        if(i > 1) dep[i] = dep[par[i]] + 1;
        id[i] = sz[dep[i]]++;
    }
    const ll B = 150;
    vector<vector<ll>> memo(n + 1);
    for(ll d = 0; d <= n; d++){
        if(sz[d] > 0 && sz[d] <= B) memo[d].assign(sz[d] * sz[d], -1);
    }
    vector<pair<ll, ll>> stk;
    while(q--){
        ll x, y, res = 0; cin >> x >> y;
        stk.clear();
        while(x != 0){
            ll d = dep[x];
            if(!memo[d].empty()){
                ll idx = id[x] * sz[d] + id[y];
                if(memo[d][idx] >= 0){
                    res = memo[d][idx];
                    break;
                }
            }
            stk.push_back({x, y});
            x = par[x]; y = par[y];
        }
        for(ll i = (ll)stk.size() - 1; i >= 0; i--){
            ll u = stk[i].first, v = stk[i].second;
            res += a[u] * a[v];
            ll d = dep[u];
            if(!memo[d].empty()) memo[d][id[u] * sz[d] + id[v]] = res;
        }
        cout << res << endl;
    }
    return 0;
}
