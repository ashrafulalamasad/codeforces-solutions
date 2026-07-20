#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll MOD = 1000000007;

ll modpow(ll a, ll b){
    ll res = 1;
    while(b){
        if(b & 1) res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}

int main()
{
    fast;
    tc{
        ll l, r, k; cin >> l >> r >> k;
        if(k > 9){
            cout << 0 << endl;
            continue;
        }
        ll limit = 9 / k;
        ll valid = limit + 1;
        ll ans = limit * modpow(valid, l) % MOD;
        ans = ans * (modpow(valid, r - l) - 1 + MOD) % MOD;
        ans = ans * modpow(valid - 1, MOD - 2) % MOD;
        cout << ans << endl;
    }
    return 0;
}
