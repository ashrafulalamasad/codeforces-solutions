#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll k2, k3, k5, k6; cin >> k2 >> k3 >> k5 >> k6;
    ll cnt256 = min({k2, k5, k6});
    ll ans = cnt256 * 256;
    k2 -= cnt256;
    ll cnt32 = min(k2, k3);
    ans += cnt32 * 32;
    cout << ans << endl;
    return 0;
}
