#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll x, y; cin >> x >> y;
        if(y % x == 0) cout << "1 " << y / x << endl;
        else cout << "0 0" << endl;
    }
    return 0;
}
