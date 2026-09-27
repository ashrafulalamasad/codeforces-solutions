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
        ll r = k - 1, s = min(r, n - r), ans = 0;
        for(ll i = 1; i <= s; i++){
            ans += max(a[i - 1], a[n - i]);
        }
        for(ll i = r; i < n - r; i++){
            ans += a[i];
        }
        cout << ans << endl;
    }
    return 0;
}
