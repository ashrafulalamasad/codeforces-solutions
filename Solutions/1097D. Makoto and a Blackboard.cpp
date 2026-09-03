#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll MOD = 1000000007;

int main()
{
    fast;
    ll n, k, ans = 1; cin >> n >> k;
    vector<pair<ll, ll>> primes; ll temp = n;
    for(ll p = 2; p * p <= temp; p++){
        if(temp % p == 0){
            ll e = 0;
            while(temp % p == 0){
                temp /= p; e++;
            }
            primes.push_back(make_pair(p, e));
        }
    }
    if(temp > 1) primes.push_back(make_pair(temp, 1));
    vector<ll> inv(52); inv[1] = 1;
    for(ll i = 2; i < 52; i++){
        inv[i] = (MOD - (MOD / i) * inv[MOD % i] % MOD) % MOD;
    }
    for(auto& pe : primes){
        ll p = pe.first, e = pe.second;
        vector<ll> pw(e + 1); pw[0] = 1;
        for(ll i = 1; i <= e; i++){
            pw[i] = pw[i - 1] * p % MOD;
        }
        vector<ll> dp(e + 1, 0); dp[e] = 1;
        for(ll step = 0; step < k; step++){
            vector<ll> ndp(e + 1, 0);
            ll suffix = 0;
            for(ll f = e; f >= 0; f--){
                suffix = (suffix + dp[f] * inv[f + 1]) % MOD;
                ndp[f] = suffix;
            }
            dp = ndp;
        }
        ll expected = 0;
        for(ll x = 0; x <= e; x++){
            expected = (expected + dp[x] * pw[x]) % MOD;
        }
        ans = ans * expected % MOD;
    }
    cout << ans << endl;
    return 0;
}
