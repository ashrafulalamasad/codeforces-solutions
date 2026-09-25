#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k;
        ll mod = 1000000007;
        auto modpow = [&](ll a, ll e) -> ll {
            ll r = 1;
            while(e > 0){
                if(e % 2 == 1) r = r * a % mod;
                a = a * a % mod;
                e /= 2;
            }
            return r;
        };
        ll p2m1 = modpow(2, n - 1), ans = 0;
        if(n % 2 == 1) ans = modpow((p2m1 + 1) % mod, k);
        else{
            ll total = p2m1 * 2 % mod;
            ll w00 = (p2m1 - 1 + mod) % mod;
            ll d = (p2m1 + 1) % mod;
            ll inv = modpow(d, mod - 2);
            ll a1 = modpow(total, k);
            ll a2 = modpow(w00, k);
            ans = (a1 + p2m1 * a2) % mod;
            ans = ans * inv % mod;
        }
        cout << ans << endl;
    }
    return 0;
}
