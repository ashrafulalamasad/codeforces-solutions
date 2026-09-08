#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> pref(n + 1, 0);
        for(ll i = 1; i <= n; i++){
            ll x; cin >> x;
            pref[i] = pref[i - 1] + x;
        }
        ll q; cin >> q;
        while(q--){
            ll l, u; cin >> l >> u;
            auto f = [&](ll r) -> ll {
                ll s = pref[r] - pref[l - 1];
                return s * u - s * (s - 1) / 2;
            };
            ll target = pref[l - 1] + u;
            ll r = upper_bound(pref.begin() + l, pref.begin() + n + 1, target) - pref.begin() - 1;
            ll ans;
            if(r < l){
                ans = l;
            }else if(r == n){
                ans = n;
            }else if(f(r) >= f(r + 1)){
                ans = r;
            }else{
                ans = r + 1;
            }
            cout << ans << " ";
        }
        cout << endl;
    }
    return 0;
}
