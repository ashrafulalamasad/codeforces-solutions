#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n;
        ll x, y; cin >> x >> y;
        ll m = min(x, y);
        if(n == 0) cout << 0 << endl;
        else cout << (n + m - 1) / m << endl;
    }
    return 0;
}
