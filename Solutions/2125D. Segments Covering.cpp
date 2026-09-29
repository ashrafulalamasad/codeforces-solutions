#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll power(ll a, ll b, ll mod){
    ll ans = 1;
    while(b){
        if(b & 1) ans = ans * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return ans;
}

int main()
{
    fast;
    const ll mod = 998244353;
    ll n, m; cin >> n >> m;
    vector<vector<pair<ll, ll>>> ending(m + 1);
    ll outside = 1;
    for(ll i = 0; i < n; i++){
        ll l, r, p, q; cin >> l >> r >> p >> q;
        outside = outside * (q - p) % mod * power(q, mod - 2, mod) % mod;
        ll weight = p * power(q - p, mod - 2, mod) % mod;
        ending[r].push_back({l, weight});
    }
    vector<ll> dp(m + 1);
    dp[0] = 1;
    for(ll r = 1; r <= m; r++){
        for(auto [l, weight] : ending[r]) dp[r] = (dp[r] + dp[l - 1] * weight) % mod;
    }
    cout << outside * dp[m] % mod << endl;
    return 0;
}
