#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    ll left = (x2 - x1) * (y4 - y3);
    ll right = (y2 - y1) * (x4 - x3);
    if(left == right) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
