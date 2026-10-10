#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<ll> d(n - 1);
    for(ll i = 0; i < n - 1; i++) cin >> d[i];
    ll a, b, ans = 0; cin >> a >> b;
    for(ll i = a - 1; i < b - 1; i++) ans = ans + d[i];
    cout << ans << endl;
    return 0;
}
