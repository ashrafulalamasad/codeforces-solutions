#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m, k = 0, t = -1; cin >> n >> m;
        vector<pair<ll, ll>> b(n);
        for(ll i = 0; i < n; i++){
            ll l, u = 0; cin >> l;
            vector<ll> a(l), seen(l + 2, 0);
            for(ll j = 0; j < l; j++) cin >> a[j];
            for(ll j = 0; j < l; j++) if(a[j] <= l + 1) seen[a[j]] = 1;
            while(seen[u]) u++;
            t = max(t, u); seen[u] = 1;
            ll v = u;
            while(seen[v]) v++;
            b[i] = {u, v}; k = max(k, v);
        }
        vector<vector<ll>> g(k + 1);
        for(ll i = 0; i < n; i++) g[b[i].first].push_back(b[i].second);
        vector<ll> f(k + 1, 0);
        for(ll u = k; u >= 0; u--){
            f[u] = u;
            for(ll v : g[u]) f[u] = max(f[u], f[v]);
            if(g[u].size() >= 2) t = max(t, f[u]);
        }
        ll ans = 0;
        ll lim = min(k, m);
        for(ll i = 0; i <= lim; i++) ans += max(t, f[i]);
        if(k < m) ans += (k + 1 + m) * (m - k) / 2;
        cout << ans << endl;
    }
    return 0;
}
