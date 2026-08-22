#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n;
        ll lo = 1, hi = 2023;
        while(lo < hi){
            ll mid = (lo + hi) / 2;
            if(mid * (mid + 1) / 2 >= n){
                hi = mid;
            }else{
                lo = mid + 1;
            }
        }
        ll r = lo;
        ll prev = (r - 1) * r / 2;
        ll p = n - prev;
        ll ans = 0;
        for(ll k = 1; k <= r; k++){
            ll L = max(1LL, p - (r - k));
            ll R = min(k, p);
            if(L > R){
                continue;
            }
            ll cnt = R - L + 1;
            ll start = k * (k - 1) / 2 + L;
            ll sum1 = cnt * (cnt - 1) / 2;
            ll sum2 = cnt * (cnt - 1) * (2 * cnt - 1) / 6;
            ans += cnt * start * start + 2 * start * sum1 + sum2;
        }
        cout << ans << endl;
    }
    return 0;
}
