#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, g0 = 0, g1 = 0; cin >> n; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < n; i += 2) g0 = __gcd(g0, a[i]);
        for(ll i = 1; i < n; i += 2) g1 = __gcd(g1, a[i]);
        bool ok0 = true, ok1 = true;
        for(ll i = 1; i < n; i += 2) if(a[i] % g0 == 0) ok0 = false;
        for(ll i = 0; i < n; i += 2) if(a[i] % g1 == 0) ok1 = false;
        if(ok0) cout << g0 << endl;
        else if(ok1) cout << g1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}
