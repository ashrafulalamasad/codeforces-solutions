#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, x, y; cin >> n >> x >> y;
        ll g = gcd(x, y);
        ll lcm = x / g * y;
        ll both = lcm > n ? 0 : n / lcm;
        ll cx = n / x - both;
        ll cy = n / y - both;
        cout << (n + n - cx + 1) * cx / 2 - cy * (cy + 1) / 2 << endl;
    }
    return 0;
}
