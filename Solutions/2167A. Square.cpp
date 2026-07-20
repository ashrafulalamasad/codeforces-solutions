#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        (a == b && b == c && c == d) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}
