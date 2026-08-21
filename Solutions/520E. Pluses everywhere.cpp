#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll MOD = 1e9 + 7;

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
    ll n, k; string s; cin >> n >> k >> s;
    vector<ll> fact(n + 1), inv_fact(n + 1);
    fact[0] = 1;
    for(ll i = 1; i <= n; i++){
        fact[i] = fact[i - 1] * i % MOD;
    }
    inv_fact[n] = power(fact[n], MOD - 2);
    for(ll i = n - 1; i >= 0; i--){
        inv_fact[i] = inv_fact[i + 1] * (i + 1) % MOD;
    }
    auto nCr = [&](ll N, ll R) -> ll {
        if(R < 0 || R > N || N < 0){
            return 0;
        }
        return fact[N] * inv_fact[R] % MOD * inv_fact[N - R] % MOD;
    };
    vector<ll> pow10(n + 1);
    pow10[0] = 1;
    for(ll i = 1; i <= n; i++){
        pow10[i] = pow10[i - 1] * 10 % MOD;
    }
    vector<ll> P(n + 1, 0);
    if(n >= 2){
        P[0] = nCr(n - 2, k - 1);
        for(ll U = 1; U <= n - 2; U++){
            P[U] = (P[U - 1] + pow10[U] * nCr(n - 2 - U, k - 1)) % MOD;
        }
    }
    ll ans = 0;
    for(ll d = 0; d < n; d++){
        ll val = s[d] - '0';
        ll U = n - 2 - d;
        ll term1 = (U >= 0) ? P[U] : 0;
        ll term2 = pow10[n - 1 - d] * nCr(d, k) % MOD;
        ll contrib = val * (term1 + term2) % MOD;
        ans = (ans + contrib) % MOD;
    }
    cout << ans << endl;
    return 0;
}
