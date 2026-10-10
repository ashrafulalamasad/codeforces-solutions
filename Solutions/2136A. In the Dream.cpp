#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll a, b, c, d; cin >> a >> b >> c >> d;
        ll x = a, y = b, u = c - a, v = d - b;
        if(max(x, y) > 2 * min(x, y) + 2 || max(u, v) > 2 * min(u, v) + 2) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}
