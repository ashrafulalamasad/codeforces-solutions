#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll nr, ng, nb; cin >> nr >> ng >> nb;
        vector<ll> r(nr), g(ng), b(nb);
        for(ll i = 0; i < nr; i++) cin >> r[i];
        for(ll i = 0; i < ng; i++) cin >> g[i];
        for(ll i = 0; i < nb; i++) cin >> b[i];
        sort(r.begin(), r.end());
        sort(g.begin(), g.end());
        sort(b.begin(), b.end());
        ll ans = LLONG_MAX;
        auto go = [&](vector<ll>& lo, vector<ll>& mid, vector<ll>& hi){
            for(ll y : mid){
                ll i = upper_bound(lo.begin(), lo.end(), y) - lo.begin();
                ll j = lower_bound(hi.begin(), hi.end(), y) - hi.begin();
                if(i == 0 || j == (ll)hi.size()) continue;
                ll x = lo[i - 1], z = hi[j];
                ans = min(ans, (x - y) * (x - y) + (y - z) * (y - z) + (z - x) * (z - x));
            }
        };
        go(r, g, b);
        go(r, b, g);
        go(g, r, b);
        go(g, b, r);
        go(b, r, g);
        go(b, g, r);
        cout << ans << endl;
    }
    return 0;
}
