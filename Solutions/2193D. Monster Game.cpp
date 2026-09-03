#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n), b(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < n; i++) cin >> b[i];
        sort(a.rbegin(), a.rend());
        vector<ll> pre(n + 1, 0);
        for(ll i = 0; i < n; i++) pre[i + 1] = pre[i] + b[i];
        ll ans = 0;
        for(ll k = 1; k <= n; k++){
            ll x = a[k - 1];
            ll L = upper_bound(pre.begin(), pre.end(), k) - pre.begin() - 1;
            ans = max(ans, x * L);
        }
        cout << ans << endl;
    }
    return 0;
}
