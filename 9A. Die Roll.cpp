#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll y, w; cin >> y >> w;
    ll mx = max(y,w);
    ll a = 6-mx+1, b = 6;
    ll g=__gcd(a,b);
    cout << a/g << "/" << b/g <<endl;
    return 0;
}
