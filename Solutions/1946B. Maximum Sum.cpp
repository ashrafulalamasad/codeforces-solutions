#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    const ll mod = 1000000007;
    tc{
        ll n, k; cin >> n >> k; vector<ll> a(n);
        ll sum = 0, current = 0, best = 0;
        for(ll i = 0; i < n; i++){
            cin >> a[i]; sum += a[i];
            current = max(0LL, current + a[i]);
            best = max(best, current);
        }
        ll power = 1;
        while(k--) power = power * 2 % mod;
        ll ans = ((sum % mod + mod) % mod + (best % mod) * ((power - 1 + mod) % mod)) % mod;
        cout << ans << endl;
    }
    return 0;
}
