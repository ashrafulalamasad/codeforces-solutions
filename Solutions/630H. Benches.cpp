#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    ll c5 = n * (n-1) * (n-2) * (n-3) * (n-4) / 120;
    ll ans = c5 * c5 * 120;
    cout << ans << endl;
    return 0;
}
