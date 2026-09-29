#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, m; cin >> n >> m;
    const ll mod = 998244353;
    if(n == 2){
        cout << 0 << endl;
        return 0;
    }
    auto modPow = [&](ll base, ll exponent){
        ll result = 1;
        while(exponent > 0){
            if(exponent % 2) result = result * base % mod;
            base = base * base % mod;
            exponent /= 2;
        }
        return result;
    };
    vector<ll> fact(m + 1), invFact(m + 1);
    fact[0] = 1;
    for(ll i = 1; i <= m; i++) fact[i] = fact[i - 1] * i % mod;
    invFact[m] = modPow(fact[m], mod - 2);
    for(ll i = m; i > 0; i--) invFact[i - 1] = invFact[i] * i % mod;
    ll answer = fact[m] * invFact[n - 1] % mod * invFact[m - n + 1] % mod;
    answer = answer * (n - 2) % mod * modPow(2, n - 3) % mod;
    cout << answer << endl;
    return 0;
}
