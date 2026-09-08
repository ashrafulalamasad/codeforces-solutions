#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k;
        vector<ll> a(n), pref(n + 1, 0);
        for(ll i = 0; i < n; i++){
            cin >> a[i];
            pref[i + 1] = pref[i] + a[i];
        }
        ll ans = 0;
        for(ll bad = 0; bad <= n; bad++){
            ll good = n - bad;
            ll cur = pref[good] - good * k;
            for(ll j = 1; j <= bad && j <= 30; j++){
                cur += a[good + j - 1] >> j;
            }
            ans = max(ans, cur);
        }
        cout << ans << endl;
    }
    return 0;
}
