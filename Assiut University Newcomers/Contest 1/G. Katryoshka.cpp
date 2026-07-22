#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, m, k; cin >> n >> m >> k;
    ll x = min({n, m, k});
    n -= x; m -= x; k -= x;
    ll ans = x + min(n / 2, k);
    cout << ans << endl;
    return 0;
}
