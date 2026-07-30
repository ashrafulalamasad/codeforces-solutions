#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    ll left = (y3 - y2) * (x2 - x1);
    ll right = (y2 - y1) * (x3 - x2);
    if(left == right) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
