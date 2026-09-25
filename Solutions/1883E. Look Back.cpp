#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool ge(ll a, ll x, ll m, ll e){
    ll fa = 63 - __builtin_clzll(a);
    ll fm = 63 - __builtin_clzll(m);
    if(fa + x > fm + e) return true;
    if(fa + x < fm + e) return false;
    if(x >= e){
        ll d = x - e;
        if(d >= 63) return true;
        return a >= ((m - 1) >> d) + 1;
    }
    ll d = e - x;
    if(d >= 63) return false;
    if(m > (LLONG_MAX >> d)) return false;
    return a >= (m << d);
}

ll minX(ll a, ll m, ll e){
    ll fa = 63 - __builtin_clzll(a);
    ll fm = 63 - __builtin_clzll(m);
    ll x = fm + e - fa;
    if(x < 0) x = 0;
    if(!ge(a, x, m, e)) x++;
    return x;
}

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        ll ans = 0, m = a[0], e = 0;
        for(ll i = 1; i < n; i++){
            if(ge(a[i], 0, m, e)){
                m = a[i];
                e = 0;
            }else{
                ll x = minX(a[i], m, e);
                ans += x;
                m = a[i];
                e = x;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
