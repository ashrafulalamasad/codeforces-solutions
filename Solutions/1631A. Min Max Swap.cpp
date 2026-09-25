#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n), b(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < n; i++) cin >> b[i];
        ll mx = 0, mn = 0;
        for(ll i = 0; i < n; i++){
            mx = max(mx, max(a[i], b[i]));
            mn = max(mn, min(a[i], b[i]));
        }
        cout << mx * mn << endl;
    }
    return 0;
}
