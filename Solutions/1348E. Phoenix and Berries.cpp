#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, k, all = 0; cin >> n >> k; vector<ll> a(n), b(n);
    for(ll i = 0; i < n; i++){
        cin >> a[i] >> b[i]; all += a[i] + b[i];
    }
    vector<bool> dp(k, false); dp[0] = true;
    for(ll i = 0; i < n; i++){
        vector<bool> ndp(k, false);
        ll total = a[i] + b[i], t = total / k;
        for(ll y = t; y >= max(0LL, t - k); y--){
            ll T = total - y * k;
            ll L = max(0LL, T - b[i]);
            ll R = min(a[i], T);
            if(L > R) continue;
            if(R - L + 1 >= k){
                if(any_of(dp.begin(), dp.end(), [](bool x){ return x; })){
                    fill(ndp.begin(), ndp.end(), true);
                }
                break;
            }
            for(ll l = L; l <= R; l++){
                ll r_mod = l % k;
                if(r_mod == 0){
                    for(ll r = 0; r < k; r++) if(dp[r]) ndp[r] = true;
                }else{
                    for(ll r = 0; r < k; r++){
                        if(dp[r]) ndp[(r + r_mod) % k] = true;
                    }
                }
            }
        }
        if(t > k){
            ll r_mod = a[i] % k;
            if(r_mod == 0){
                for(ll r = 0; r < k; r++) if(dp[r]) ndp[r] = true;
            }else{
                for(ll r = 0; r < k; r++){
                    if(dp[r]) ndp[(r + r_mod) % k] = true;
                }
            }
        }
        dp = ndp;
    }
    ll S_mod = all % k, ans = all / k;
    bool ok = false;
    for(ll r = 0; r <= S_mod; r++){
        if(dp[r]){ ok = true; break; }
    }
    if(!ok) ans--;
    cout << ans << endl;
    return 0;
}
