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
        ll c0 = 0, c1 = 0, c2 = 0, c3 = 0;
        for(ll i = 0; i < n; i++){
            if(a[i] % 4 == 0) c0++;
            if(a[i] % 4 == 1) c1++;
            if(a[i] % 4 == 2) c2++;
            if(a[i] % 4 == 3) c3++;
        }
        ll ans = c0;
        if(c2 > ans) ans = c2;
        ll odd = c1 + c3;
        if(odd > ans) ans = odd;
        cout << ans << endl;
    }
    return 0;
}
