#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll p, q, l, r; cin >> p >> q >> l >> r;
    vector<pair<ll,ll>> a(p), c(q);
    for(ll i=0; i<p; i++){
        cin >> a[i].first >> a[i].second;
    }
    for(ll j=0; j<q; j++){
        cin >> c[j].first >> c[j].second;
    }
    ll ans = 0;
    for(ll t = l; t <= r; t++){
        bool ok = false;
        for(ll j=0; j<q && !ok; j++){
            ll cs = c[j].first + t;
            ll cd = c[j].second + t;
            for(ll i=0; i<p; i++){
                if(!(cd < a[i].first || cs > a[i].second)){
                    ok = true;
                    break;
                }
            }
        }
        if(ok) ans++;
    }
    cout << ans << endl;
    return 0;
}
