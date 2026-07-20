#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, k; cin >> n >> k; vector<ll> f(n);
    for(auto& x : f) cin >> x;
    sort(f.rbegin(), f.rend());
    ll ans = 0;
    for(ll i = 0; i < n; i += k)
        ans += 2 * (f[i] - 1);
    cout << ans << endl;
    return 0;
}
