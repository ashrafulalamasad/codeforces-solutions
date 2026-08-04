#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, m, k; cin >> n >> m >> k;
    ll ans = 0;
    ll z = min({n, m, k});
    ans += z;
    n -= z; m -= z; k -= z;
    ll x = min(n / 2, k);
    ans += x;
    n -= 2 * x; k -= x;
    ll y = min({n / 2, m, k});
    ans += y;
    cout << ans << endl;
    return 0;
}
