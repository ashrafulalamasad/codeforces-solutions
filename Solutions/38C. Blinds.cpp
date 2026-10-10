#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, l, ans = 0; cin >> n >> l; vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll x = l; x <= 100; x++){
        ll cnt = 0;
        for(ll i = 0; i < n; i++) cnt = cnt + a[i] / x;
        ans = max(ans, cnt * x);
    }
    cout << ans << endl;
    return 0;
}
