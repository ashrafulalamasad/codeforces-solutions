#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m; cin >> n >> m;
        vector<ll> a(n + 1), b(m);
        for(ll i = 1; i <= n; i++) cin >> a[i];
        for(ll i = 0; i < m; i++) cin >> b[i];
        sort(b.begin(), b.end());
        vector<ll> pref(n + 1, 0);
        for(ll i = 1; i <= n; i++) pref[i] = pref[i - 1] + a[i];
        ll ans = pref[n] - pref[b[m - 1]];
        for(ll i = 0; i < m; i++){
            ll lo = (i == 0 ? 1 : b[i - 1] + 1);
            ans += abs(pref[b[i]] - pref[lo - 1]);
        }
        cout << ans << endl;
    }
    return 0;
}
