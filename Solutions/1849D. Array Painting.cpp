#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    ll ans = 0, l = 0;
    while(l < n){
        ll r = l + 1;
        bool hasTwo = a[l] == 2;
        bool hasMiddleZero = false;
        while(r < n){
            if(r - 1 > l && a[r - 1] == 0) hasMiddleZero = true;
            if(a[r] == 2) hasTwo = true;
            bool good = !hasMiddleZero && (hasTwo || a[l] != 0 || a[r] != 0);
            if(!good) break;
            r++;
        }
        l = r;
        ans++;
    }
    cout << ans << endl;
    return 0;
}
