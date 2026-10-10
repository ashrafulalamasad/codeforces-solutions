#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        ll ans = 4000000000000000000;
        for(ll s = 0; s < 3; s++){
            vector<ll> b(n, 0);
            for(ll i = 0; i < n; i++) b[i] = a[(i + s) % n];
            ll m = n + 1; vector<ll> dp(m, 0);
            dp[0] = 0; dp[1] = 4000000000000000000;
            for(ll i = 2; i <= n; i++){
                ll best = dp[i - 2] + abs(b[i - 2] - b[i - 1]);
                if(i >= 3){
                    ll x = b[i - 3], y = b[i - 2], z = b[i - 1];
                    ll mx = max(x, max(y, z));
                    ll mn = min(x, min(y, z));
                    ll cur = dp[i - 3] + mx - mn;
                    if(cur < best) best = cur;
                }
                dp[i] = best;
            }
            if(dp[n] < ans) ans = dp[n];
        }
        cout << ans << endl;
    }
    return 0;
}
