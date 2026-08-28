#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll MOD = 1000000007;

ll power(ll b, ll e){
    ll res = 1; b %= MOD;
    while(e > 0){
        if(e & 1) res = res * b % MOD;
        b = b * b % MOD;
        e >>= 1;
    }
    return res;
}

int main()
{
    fast;
    ll n, m; cin >> n >> m; vector<ll> a(n), b(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < n; i++) cin >> b[i];
    ll inv = power(m, MOD - 2), inv2 = inv * inv % MOD, half = power(2, MOD - 2);
    ll bothFree = m % MOD * ((m - 1) % MOD) % MOD * half % MOD * inv2 % MOD;
    ll ans = 0, pref = 1;
    for(ll i = 0; i < n; i++){
        ll gt, eq;
        if(a[i] != 0 && b[i] != 0){
            gt = (a[i] > b[i]) ? 1 : 0;
            eq = (a[i] == b[i]) ? 1 : 0;
        }else if(a[i] != 0){
            gt = (a[i] - 1) % MOD * inv % MOD;
            eq = inv;
        }else if(b[i] != 0){
            gt = (m - b[i]) % MOD * inv % MOD;
            eq = inv;
        }else{
            gt = bothFree; eq = inv;
        }
        ans = (ans + pref * gt) % MOD;
        pref = pref * eq % MOD;
        if(pref == 0) break;
    }
    cout << ans << endl;
    return 0;
}
