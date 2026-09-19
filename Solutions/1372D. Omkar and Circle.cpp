#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, ans = 0; cin >> n; ll m = 2 * n;
    vector<ll> a(n), b(m), pref(m);
    for(ll i = 0; i < n; i++) cin >> a[i];
    if(n == 1){
        cout << a[0] << endl;
        return 0;
    }
    for(ll i = 0; i < m; i++) b[i] = a[i % n];
    for(ll i = 0; i < m; i++){
        pref[i] = b[i];
        if(i >= 2) pref[i] = pref[i] + pref[i - 2];
    }
    for(ll s = 0; s < n; s++){
        ll e = s + n - 1, cur = pref[e];
        if(s >= 2) cur = cur - pref[s - 2];
        ans = max(ans, cur);
    }
    cout << ans << endl;
    return 0;
}
