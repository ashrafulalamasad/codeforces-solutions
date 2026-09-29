#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
        if((x1 < y1) != (x2 < y2)) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}
