#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, ax, ay, bx, by; cin >> n >> ax >> ay >> bx >> by;
        vector<ll> x(n), y(n), idx(n);
        for(ll i = 0; i < n; i++) cin >> x[i];
        for(ll i = 0; i < n; i++) cin >> y[i];
        for(ll i = 0; i < n; i++) idx[i] = i;
        sort(idx.begin(), idx.end(), [&](ll p, ll q){ return x[p] < x[q]; });
        ll curLo = ay, curHi = ay, dpLo = 0, dpHi = 0, i = 0;
        while(i < n){
            ll j = i, cx = x[idx[i]];
            ll lo = y[idx[i]], hi = y[idx[i]];
            while(j < n && x[idx[j]] == cx){
                lo = min(lo, y[idx[j]]);
                hi = max(hi, y[idx[j]]); j++;
            }
            ll w = hi - lo;
            ll ndpHi = min(dpLo + llabs(curLo - lo), dpHi + llabs(curHi - lo)) + w;
            ll ndpLo = min(dpLo + llabs(curLo - hi), dpHi + llabs(curHi - hi)) + w;
            dpHi = ndpHi; dpLo = ndpLo; curLo = lo; curHi = hi; i = j;
        }
        ll ans = min(dpLo + llabs(curLo - by), dpHi + llabs(curHi - by));
        ans += bx - ax;
        cout << ans << endl;
    }
    return 0;
}
