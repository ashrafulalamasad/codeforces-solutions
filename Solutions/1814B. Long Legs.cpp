#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll a, b; cin >> a >> b;
        ll ans = a + b;
        for(ll m = 1; m <= 1e5; m++){
            ll total = (m - 1) + (a + m - 1) / m + (b + m - 1) / m;
            ans = min(ans, total);
        }
        cout << ans << endl;
    }
    return 0;
}
