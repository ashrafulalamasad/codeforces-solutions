#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;
    tc{
        ll n, k; cin >> n >> k;
        ll total = n * (2LL * k + n - 1) / 2;
        ll lo = 1, hi = n;
        while(lo < hi){
            ll mid = (lo + hi) / 2;
            ll left = mid * (2LL * k + mid - 1) / 2;
            if(2 * left < total) lo = mid + 1;
            else hi = mid;
        }
        ll ans = 1e18;
        for(ll i = lo - 1; i <= lo; ++i){
            if(i < 1 || i > n - 1) continue;
            ll left = i * (2LL * k + i - 1) / 2;
            ans = min(ans, abs(2 * left - total));
        }
        cout << ans << endl;
    }
    return 0;
}
