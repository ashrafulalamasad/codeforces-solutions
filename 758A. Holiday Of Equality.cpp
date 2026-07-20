#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<ll> a(n);
    for(ll &x: a) cin >> x;
    ll mx = *max_element(a.begin(), a.end());
    ll ans = 0;
    for(ll x: a) ans += mx - x;
    cout << ans << endl;
    return 0;
}
