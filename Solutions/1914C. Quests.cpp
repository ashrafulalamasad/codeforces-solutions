#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k; vector<ll> a(n), b(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < n; i++) cin >> b[i];
        ll ans = 0, sum = 0, mx = 0;
        for(ll i = 0; i < n && i < k; i++){
            sum = sum + a[i];
            mx = max(mx, b[i]);
            ans = max(ans, sum + (k - i - 1) * mx);
        }
        cout << ans << endl;
    }
    return 0;
}
