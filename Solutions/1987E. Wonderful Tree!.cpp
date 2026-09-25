#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n),b(n, 0), d(n, 0);
        for(ll i = 0; i < n; i++) cin >> a[i];
        vector<vector<ll>> g(n);
        for(ll i = 1; i < n; i++){
            ll p; cin >> p; p--;
            g[p].push_back(i);
            d[i] = d[p] + 1;
        }
        ll inf = 4000000000000000000LL;
        for(ll v = 0; v < n; v++){
            if(g[v].empty()) b[v] = inf;
            else{
                ll s = -a[v];
                for(ll i = 0; i < (ll)g[v].size(); i++) s += a[g[v][i]];
                b[v] = s;
            }
        }
        ll ans = 0; queue<ll> q;
        for(ll v = n - 1; v >= 0; v--){
            while(!q.empty()) q.pop();
            q.push(v);
            while(!q.empty()){
                ll cur = q.front(); q.pop();
                for(ll i = 0; i < (ll)g[cur].size(); i++){
                    ll u = g[cur][i], need = -b[v];
                    ll have = b[u], delta = need;
                    if(have < delta) delta = have;
                    if(delta > 0){
                        b[v] += delta; b[u] -= delta;
                        ans += delta * (d[u] - d[v]);
                    }
                    q.push(u);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
