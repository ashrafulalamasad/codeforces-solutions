#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, m, k; cin >> n >> m >> k;
    ll p = 1000000007, phi = p - 1;
    if(k == -1 && (n + m) % 2 != 0){
        cout << 0 << endl;
        return 0;
    }
    ll e = ((n - 1) % phi) * ((m - 1) % phi) % phi;
    ll ans = 1, b = 2;
    while(e > 0){
        if(e % 2 == 1) ans = ans * b % p;
        b = b * b % p;
        e /= 2;
    }
    cout << ans << endl;
    return 0;
}
