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
        for(ll i = 0; i < n; i++){
            ll x; cin >> x;
        }
        ll m = 10 - n;
        ll ans = m * (m - 1) / 2 * 6;
        cout << ans << endl;
    }
    return 0;
}
