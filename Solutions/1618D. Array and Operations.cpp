#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end()); ll ans = 0;
        for(ll i = 0; i < n - 2 * k; i++) ans = ans + a[i];
        for(ll i = 0; i < k; i++) ans = ans + a[n - 2 * k + i] / a[n - k + i];
        cout << ans << endl;
    }
    return 0;
}
