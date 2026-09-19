#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<ll> a(n), b(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < n; i++) cin >> b[i];
    vector<ll> pref(n + 1, 0), dp1(n), dp2(n), cur(n);
    for(ll i = 0; i < n; i++) pref[i + 1] = pref[i] + a[i] * b[i];
    ll ans = pref[n];
    for(ll i = 0; i < n; i++) dp1[i] = a[i] * b[i];
    for(ll len = 2; len <= n; len++){
        for(ll l = 0; l + len - 1 < n; l++){
            ll r = l + len - 1;
            ll val = a[l] * b[r] + a[r] * b[l];
            if(len > 2) val += dp2[l + 1];
            cur[l] = val;
            ans = max(ans, pref[l] + val + (pref[n] - pref[r + 1]));
        }
        dp2 = dp1; dp1 = cur;
    }
    cout << ans << endl;
    return 0;
}
