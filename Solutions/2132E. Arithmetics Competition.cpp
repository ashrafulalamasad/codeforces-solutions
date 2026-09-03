#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m, q; cin >> n >> m >> q;
        vector<ll> a(n), b(m);
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < m; i++) cin >> b[i];
        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());
        vector<ll> pa(n + 1, 0), pb(m + 1, 0);
        for(ll i = 0; i < n; i++){
            pa[i + 1] = pa[i] + a[i];
        }
        for(ll i = 0; i < m; i++){
            pb[i + 1] = pb[i] + b[i];
        }
        while(q--){
            ll x, y, z; cin >> x >> y >> z;
            ll lo = max(0LL, z - y), hi = min(x, z);
            while(hi - lo > 2){
                ll m1 = lo + (hi - lo) / 3, m2 = hi - (hi - lo) / 3;
                if(pa[m1] + pb[z - m1] < pa[m2] + pb[z - m2]){
                    lo = m1 + 1;
                }else{
                    hi = m2;
                }
            }
            ll best = 0;
            for(ll i = lo; i <= hi; i++){
                best = max(best, pa[i] + pb[z - i]);
            }
            cout << best << endl;
        }
    }
    return 0;
}
