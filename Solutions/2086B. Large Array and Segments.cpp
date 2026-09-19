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
        for(ll i = 0; i < n; i++) pref[i + 1] = pref[i] + a[i];
        ll sum = pref[n], ans = 0;
        for(ll i = 0; i < n; i++){
            ll need = x + pref[i];
            ll c = (need + sum - 1) / sum;
            if(c < k + 1) ans = ans + (k - c + 1);
        }
        cout << ans << endl;
    }
    return 0;
}
