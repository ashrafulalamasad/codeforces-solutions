#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<ll> x(n);
    for(ll i = 0; i < n; i++) cin >> x[i];
    const ll MOD = 1000000007;
    vector<ll> pow2(n + 1); pow2[0] = 1;
    for(ll i = 1; i <= n; i++){
        pow2[i] = (pow2[i - 1] * 2) % MOD;
    }
    ll ans = (pow2[n] - n - 1 + MOD) % MOD;
    vector<ll> pref(n + 1, 0);
    for(ll i = 0; i < n; i++){
        ll w = pow2[n - 1 - i];
        pref[i + 1] = (pref[i] + w) % MOD;
    }
    for(ll j = 0; j < n; j++){
        ll left = j, lsum = 0, r = j + 1;
        for(ll k = j + 1; k < n; k++){
            ll lthr = 2LL * x[j] - x[k];
            while(left > 0 && x[left - 1] >= lthr){
                left--;
                lsum += pow2[left];
                if(lsum >= MOD) lsum -= MOD;
            }
            if(r < k + 1) r = k + 1;
            ll rthr = 2LL * x[k] - x[j];
            while(r < n && x[r] < rthr) r++;
            ll rsum = (pref[r] - pref[k + 1] + MOD) % MOD;
            ans = (ans + lsum * rsum) % MOD;
        }
    }
    cout << ans << endl;
    return 0;
}
