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
        ll mn = LLONG_MAX, mx = LLONG_MIN;
        for(ll i = 0; i < n; i++){
            ll a; cin >> a;
            mn = min(mn, a);
            mx = max(mx, a);
        }
        ll x; cin >> x;
        (x >= mn && x <= mx) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}
