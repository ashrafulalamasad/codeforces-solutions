#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll MOD = 1000000007;

ll power(ll base, ll exp){
    ll res = 1;
    base %= MOD;
    while(exp > 0){
        if(exp % 2 == 1){
            res = (res * base) % MOD;
        }
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}

int main()
{
    fast;
    tc{
        ll n, s1 = 0, s2 = 0; cin >> n;
        for(ll i = 0; i < n; i++){
            ll x; cin >> x;
            x %= MOD;
            s1 = (s1 + x) % MOD;
            s2 = (s2 + x * x % MOD) % MOD;
        }
        ll p = (s1 * s1 % MOD - s2 + MOD) % MOD;
        ll q = n * (n - 1) % MOD;
        ll ans = p * power(q, MOD - 2) % MOD;
        cout << ans << endl;
    }
    return 0;
}
