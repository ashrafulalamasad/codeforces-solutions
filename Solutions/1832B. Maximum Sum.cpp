#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k; vector<ll> a(n), pref(n + 1, 0);
        for(ll i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        for(ll i = 0; i < n; i++) pref[i + 1] = pref[i] + a[i];
        ll total = pref[n], best = 0;
        for(ll x = 0; x <= k; x++){
            ll removed = pref[2 * x] + pref[n] - pref[n - (k - x)];
            ll cur = total - removed;
            if(cur > best) best = cur;
        }
        cout << best << endl;
    }
    return 0;
}
