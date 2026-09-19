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
        ll mx = a[0], mod = 2 * k, low = 0, high = k;
        for(ll i = 1; i < n; i++) mx = max(mx, a[i]);
        for(ll i = 0; i < n; i++){
            ll b = (mx - a[i]) % mod;
            if(b < k) high = min(high, k - b);
            else low = max(low, mod - b);
        }
        if(low < high) cout << mx + low << endl;
        else cout << -1 << endl;
    }
    return 0;
}
