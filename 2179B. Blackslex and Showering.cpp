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
        vector<ll> a(n);
        for (ll i = 0; i < n; i++) cin >> a[i];
        ll S = 0;
        for (ll i = 0; i + 1 < n; i++) S += llabs(a[i] - a[i + 1]);
        ll ans = S;
        ans = min(ans, S - llabs(a[0] - a[1]));
        ans = min(ans, S - llabs(a[n - 2] - a[n - 1]));
        for (ll k = 1; k + 1 < n; k++) {
            ll cur = S - llabs(a[k - 1] - a[k]) - llabs(a[k] - a[k + 1]) + llabs(a[k - 1] - a[k + 1]);
            ans = min(ans, cur);
        }
        cout << ans << endl;
    }
    return 0;
}
