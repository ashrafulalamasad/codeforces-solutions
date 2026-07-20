#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll h, n; cin >> h >> n; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        vector<ll> c(n);
        for(ll i = 0; i < n; i++) cin >> c[i];
        auto check = [&](ll T) -> bool {
            ll tot = 0;
            for(ll i = 0; i < n; i++){
                ll times = (T + c[i] - 1) / c[i];
                tot += (ll)a[i] * times;
                if(tot >= h) return true;
            }
            return false;
        };
        ll lo = 1, hi = 1;
        while(!check(hi)){
            hi *= 2;
        }
        ll ans = hi;
        while(lo <= hi){
            ll mid = lo + (hi - lo) / 2;
            if(check(mid)){
                ans = mid;
                hi = mid - 1;
            }else{
                lo = mid + 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
