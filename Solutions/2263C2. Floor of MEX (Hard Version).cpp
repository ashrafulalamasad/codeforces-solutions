#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    const ll MOD = 1000000007;
    tc{
        ll n; cin >> n;
        vector<ll> diff(n + 1, 0), need(n, -1), dp(n + 1, 0);
        for(ll k = 1; k <= n; k++){
            ll x; cin >> x; ll l = x * k;
            if(l < n){
                ll r = min(n - 1, l + k - 1);
                diff[l]++; diff[r + 1]--;
            }
            for(ll cur = 0, c = 0; c < x && cur < n; c++, cur += k){
                ll r = min(n - 1, cur + k - 1);
                need[r] = max(need[r], cur);
            }
        }
        dp[0] = 1; ll sum = 1, ptr = 0;
        for(ll i = 0; i < n; i++){
            if(i) diff[i] += diff[i - 1];
            if(diff[i] == 0){
                dp[i + 1] = sum;
                sum = (sum * 2) % MOD;
            }
            while(ptr <= need[i]){
                sum -= dp[ptr];
                if(sum < 0) sum += MOD;
                ptr++;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
