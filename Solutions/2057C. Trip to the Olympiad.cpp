#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll l, r; cin >> l >> r;
        ll bit = 63 - __builtin_clzll(l ^ r);
        ll a = l | ((1LL << bit) - 1), b = a + 1, c = (a == l ? r : l);
        cout << a << ' ' << b << ' ' << c << endl;
    }
    return 0;
}
