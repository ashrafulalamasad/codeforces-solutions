#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, x, y, c; cin >> n >> x >> y >> c;
    auto calc = [&](ll t) -> ll {
        ll left = y - 1;
        ll right = n - y;
        ll A = min(left, right);
        ll B = max(left, right);
        ll a = t - A;
        ll b = t - B;
        ll L0 = max(1LL, x - t);
        ll R0 = min(n, x + t);
        ll ans = 0;
        ll l = L0;
        ll r = min(x, x - a);
        if(l <= r){
            ll cnt = r - l + 1;
            ll sum = (l + r) * cnt / 2;
            ans += sum * 2 + cnt * (2 * t - 2 * x + 1);
        }
        l = max(L0, x - a + 1);
        r = min(x, x - b);
        if(l <= r){
            ll cnt = r - l + 1;
            ll sum = (l + r) * cnt / 2;
            ans += sum + cnt * (t - x + A + 1);
        }
        l = max(L0, x - b + 1);
        r = x;
        if(l <= r){
            ll cnt = r - l + 1;
            ans += cnt * n;
        }
        l = x + 1;
        r = min(R0, x + b - 1);
        if(l <= r){
            ll cnt = r - l + 1;
            ans += cnt * n;
        }
        l = max(x + 1, x + b);
        r = min(R0, x + a - 1);
        if(l <= r){
            ll cnt = r - l + 1;
            ll sum = (l + r) * cnt / 2;
            ans += cnt * (t + x + A + 1) - sum;
        }
        l = max(x + 1, x + a);
        r = R0;
        if(l <= r){
            ll cnt = r - l + 1;
            ll sum = (l + r) * cnt / 2;
            ans += cnt * (2 * t + 2 * x + 1) - sum * 2;
        }
        if(ans > 4000000000000000000LL) return 4000000000000000000LL;
        return ans;
    };
    ll lo = 0;
    ll hi = 2 * n;
    while(lo < hi){
        ll mid = (lo + hi) / 2;
        if(calc(mid) >= c) hi = mid;
        else lo = mid + 1;
    }
    cout << lo << endl;
    return 0;
}
