#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll MOD = 998244353, MAXN = 5e5 + 10;
ll fact[MAXN], ifact[MAXN];

ll modpow(ll a, ll b){
    ll res = 1;
    while(b){
        if(b & 1) res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}

void precompute(){
    fact[0] = ifact[0] = 1;
    for(ll i = 1; i < MAXN; i++){
        fact[i] = fact[i - 1] * i % MOD;
    }
    ifact[MAXN - 1] = modpow(fact[MAXN - 1], MOD - 2);
    for(ll i = MAXN - 2; i >= 0; i--){
        ifact[i] = ifact[i + 1] * (i + 1) % MOD;
    }
}

int main()
{
    fast;
    precompute();
    tc{
        ll n = 0; vector<ll> c(26);
        for(ll i = 0; i < 26; i++){
            cin >> c[i]; n += c[i];
        }
        ll even = n / 2, odd = (n + 1) / 2;
        vector<ll> dp(odd + 1); dp[0] = 1;
        for(ll i = 0; i < 26; i++){
            if(c[i] == 0) continue;
            for(ll j = odd; j >= c[i]; j--){
                dp[j] = (dp[j] + dp[j - c[i]]) % MOD;
            }
        }
        ll prod_ifact = 1;
        for(ll i = 0; i < 26; i++){
            prod_ifact = prod_ifact * ifact[c[i]] % MOD;
        }
        ll ans = dp[odd] * fact[odd] % MOD;
        ans = ans * fact[even] % MOD;
        ans = ans * prod_ifact % MOD;
        cout << ans << endl;
    }
    return 0;
}
