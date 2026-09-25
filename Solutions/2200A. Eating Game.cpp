#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        ll mx = a[0];
        for(ll i = 1; i < n; i++) mx = max(mx, a[i]);
        ll cnt = 0;
        for(ll i = 0; i < n; i++) if(a[i] == mx) cnt++;
        cout << cnt << endl;
    }
    return 0;
}
