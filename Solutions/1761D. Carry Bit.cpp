#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll MOD = 1e9 + 7;
ll fact[1000005], inv_fact[1000005], pw3[1000005];

ll power(ll base, ll exp){
    ll res = 1;
    base %= MOD;
    while(exp > 0){
        if(exp & 1) res = res * base % MOD;
        base = base * base % MOD;
        exp >>= 1;
    }
    return res;
}

void precompute(ll maxn){
    fact[0] = 1;
    inv_fact[0] = 1;
    pw3[0] = 1;
    for(ll i = 1; i <= maxn; i++){
        fact[i] = fact[i - 1] * i % MOD;
        pw3[i] = pw3[i - 1] * 3 % MOD;
    }
    inv_fact[maxn] = power(fact[maxn], MOD - 2);
    for(ll i = maxn - 1; i >= 0; i--) inv_fact[i] = inv_fact[i + 1] * (i + 1) % MOD;
}

ll C(ll n, ll r){
    if(r < 0 || r > n) return 0;
    return fact[n] * inv_fact[r] % MOD * inv_fact[n - r] % MOD;
}

int main()
{
    fast;
    ll n, k; cin >> n >> k;
    if(k == 0){
        cout << power(3, n) << endl;
        return 0;
    }
    precompute(n + 1);
    ll ans = 0;
    for(ll i = 1; i <= k; i++){
        ll ways1 = C(k - 1, i - 1) * C(n - k, i - 1) % MOD;
        ll p1 = n - 2 * i + 1;
        if(p1 >= 0) ways1 = ways1 * pw3[p1] % MOD;
        else ways1 = 0;
        ll ways2 = C(k - 1, i - 1) * C(n - k, i) % MOD;
        ll p2 = n - 2 * i;
        if(p2 >= 0) ways2 = ways2 * pw3[p2] % MOD;
        else ways2 = 0;
        ans = (ans + ways1 + ways2) % MOD;
    }
    cout << ans << endl;
    return 0;
}
