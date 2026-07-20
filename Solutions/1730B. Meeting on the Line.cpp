#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    cout << fixed << setprecision(10);
    tc{
        ll n; cin >> n; vector<ll> x(n);
        for(ll i = 0; i < n; i++) cin >> x[i];
        ll mn = 1e18, mx = -1e18;
        for(ll i = 0; i < n; i++){
            ll t; cin >> t;
            mn = min(mn, x[i] - t);
            mx = max(mx, x[i] + t);
        }
        cout << (mn + mx) / 2.0 << endl;
    }
    return 0;
}
