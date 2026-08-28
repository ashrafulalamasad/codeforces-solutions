#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll x1, x2, x3; cin >> x1 >> x2 >> x3;
        ll median = x1 + x2 + x3 - min({x1, x2, x3}) - max({x1, x2, x3});
        cout << abs(x1 - median) + abs(x2 - median) + abs(x3 - median) << endl;
    }
    return 0;
}
