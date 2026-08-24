#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    auto isqrt = [&](ll n) -> ll {
        ll s = sqrtl(n);
        while((s + 1) * (s + 1) <= n){
            s++;
        }
        while(s * s > n){
            s--;
        }
        return s;
    };
    auto countY = [&](ll n) -> ll {
        if(n < 0){
            return 0;
        }
        return 2 * isqrt(n) + 1;
    };
    tc{
        ll r; cin >> r;
        ll low = r * r;
        ll high = (r + 1) * (r + 1) - 1;
        ll ans = 0;
        for(ll x = -r; x <= r; x++){
            ll x2 = x * x;
            ll b = high - x2;
            if(b < 0){
                continue;
            }
            ll a = low - x2;
            if(a < 0){
                a = 0;
            }
            ans += countY(b) - countY(a - 1);
        }
        cout << ans << endl;
    }
    return 0;
}
