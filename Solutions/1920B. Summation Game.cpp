#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k, x; cin >> n >> k >> x;
        vector<ll> a(n), pref(n + 1, 0);
        for(ll i = 0; i < n; i++) cin >> a[i];
        sort(a.rbegin(), a.rend());
        for(ll i = 0; i < n; i++) pref[i + 1] = pref[i] + a[i];
        ll ans = -1e18;
        for(ll i = 0; i <= k; i++){
            ll cur = pref[n] - 2 * pref[min(i + x, n)] + pref[i];
            ans = max(ans, cur);
        }
        cout << ans << endl;
    }
    return 0;
}
