#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll t, l, r; cin >> t >> l >> r;
    ll mod = 1e9 + 7; vector<ll> spf(r + 1, 0);
    for(ll i = 2; i <= r; i++){
        if(spf[i] == 0){
            for(ll j = i; j <= r; j += i){
                if(spf[j] == 0) spf[j] = i;
            }
        }
    }
    vector<ll> f(r + 1, 0);
    for(ll i = 2; i <= r; i++){
        ll p = spf[i];
        f[i] = (f[i / p] + (i / p) % mod * ((p * (p - 1) / 2) % mod)) % mod;
    }
    ll ans = 0, power = 1;
    for(ll i = l; i <= r; i++){
        ans = (ans + power * f[i]) % mod;
        power = power * t % mod;
    }
    cout << ans << endl;
    return 0;
}
