#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll a, b, x, y;
    cin >> a >> b >> x >> y;
    ll g = gcd(x, y);
    x = x / g; y = y / g;
    cout << min(a / x, b / y) << endl;
    return 0;
}
