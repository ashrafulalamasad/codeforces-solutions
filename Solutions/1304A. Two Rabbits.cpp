#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll x, y, a, b; cin >> x >> y >> a >> b;
        if((y - x) % (a + b) == 0) cout << (y - x) / (a + b) << endl;
        else cout << -1 << endl;
    }
    return 0;
}
