#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll a, b, c, d; char slash;
    cin >> a >> slash >> b >> c >> slash >> d;
    ll num = lcm(a, c);
    ll den = gcd(b, d);
    ll g = gcd(num, den);
    cout << num / g << "/" << den / g << endl;
    return 0;
}
