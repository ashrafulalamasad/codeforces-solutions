#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    const ll INFLL = (ll)4000000000000000000LL;
    tc{
        ll a, b, r; cin >> a >> b >> r;
        if(a == b){
            cout << 0 << endl;
            continue;
        }
        ll k = 63 - __builtin_clzll(a ^ b);
        ll A = (((a >> k) & 1) == 0) ? a : b;
        ll B = (((a >> k) & 1) == 0) ? b : a;
        ll ans = INFLL;
        for(ll s = 1; s >= -1; s -= 2){
            ll dp_tight = 0;
            ll dp_loose = INFLL;
            for(ll j = 60; j >= 0; j--){
                ll ndp_tight = INFLL;
                ll ndp_loose = INFLL;
                ll rj = (r >> j) & 1;
                for(ll tight = 0; tight <= 1; tight++){
                    ll cur = tight ? dp_tight : dp_loose;
                    if(cur == INFLL) continue;
                    for(ll xj = 0; xj <= 1; xj++){
                        if(j == k && xj != (s == 1 ? 0 : 1)) continue;
                        if(tight && xj > rj) continue;
                        ll ntight = (tight && xj == rj) ? 1 : 0;
                        ll uj = (A >> j) & 1;
                        ll vj = (B >> j) & 1;
                        ll c = xj == 0 ? vj - uj : uj - vj;
                        ll add = s * c * (1LL << j);
                        if(ntight) ndp_tight = min(ndp_tight, cur + add);
                        else ndp_loose = min(ndp_loose, cur + add);
                    }
                }
                dp_tight = ndp_tight;
                dp_loose = ndp_loose;
            }
            ans = min({ans, dp_tight, dp_loose});
        }
        cout << ans << endl;
    }
    return 0;
}
