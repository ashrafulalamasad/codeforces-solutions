#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        ll q; cin >> q;
        for(ll i = 0; i < q; i++){
            ll x, y; cin >> x >> y;
            ll D = x * x - 4LL * y;
            if(D < 0){
                cout << 0 << " ";
                continue;
            }
            ll l = 0, r = 3000000000LL;
            ll R = 0;
            while(l <= r){
                ll mid = l + (r - l) / 2;
                if(mid * mid <= D){
                    R = mid;
                    l = mid + 1;
                }else{
                    r = mid - 1;
                }
            }
            if(R * R != D){
                cout << 0 << " ";
                continue;
            }
            if((x - R) % 2 != 0){
                cout << 0 << " ";
                continue;
            }
            ll r1 = (x - R) / 2;
            ll r2 = (x + R) / 2;
            ll c1 = upper_bound(a.begin(), a.end(), r1) - lower_bound(a.begin(), a.end(), r1);
            ll c2 = upper_bound(a.begin(), a.end(), r2) - lower_bound(a.begin(), a.end(), r2);
            ll ans = 0;
            if(r1 == r2){
                ans = c1 * (c1 - 1) / 2;
            }else{
                ans = c1 * c2;
            }
            cout << ans << " ";
        }
        cout << endl;
    }
    return 0;
}
