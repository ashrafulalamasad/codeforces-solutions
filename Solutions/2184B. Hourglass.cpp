#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll s, k, m; cin >> s >> k >> m;
        ll j = m / k, r = m % k;
        ll T = (s <= k || j % 2 == 0) ? s : k;
        cout << max(0LL, T - r) << endl;
    }
    return 0;
}
