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
        ll ans = n - 1;
        ll bound = 2 * (ll)sqrt((double)n) + 10;
        for(ll m = 1; m <= bound; m++){
            ll v = (n + m - 1) / m;
            ans = min(ans, v + m - 2);
        }
        cout << ans << endl;
    }
    return 0;
}
