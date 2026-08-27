#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    ll a1, a2, a3; cin >> a1 >> a2 >> a3;
    ll b1, b2, b3; cin >> b1 >> b2 >> b3;
    ll mn = max({0LL, a1 - b1 - b3, a2 - b1 - b2, a3 - b2 - b3});
    ll mx = min(a1, b2) + min(a2, b3) + min(a3, b1);
    cout << mn << " " << mx << endl;
    return 0;
}
