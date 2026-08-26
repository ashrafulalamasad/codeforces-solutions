#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll x1, y1, x2, y2, x3, y3; cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    cout << 3 << endl;
    cout << x2 + x3 - x1 << " " << y2 + y3 - y1 << endl;
    cout << x1 + x3 - x2 << " " << y1 + y3 - y2 << endl;
    cout << x1 + x2 - x3 << " " << y1 + y2 - y3 << endl;
    return 0;
}
