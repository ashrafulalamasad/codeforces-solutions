#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll MOD = 998244353;

int main()
{
    fast;
    tc{
        ll n, k, ans = 0; cin >> n >> k;
        vector<vector<ll>> dp(n + 1, vector<ll>(k + 1, 0));
        for(ll j = 1; j <= k; j++) dp[0][j] = 1;
        for(ll sum = 1; sum <= n; sum++){
            for(ll cur = 1; cur <= k; cur++){
                for(ll prv = 1; cur * prv <= sum && cur + prv - 1 <= k; prv++){
                    dp[sum][cur] = (dp[sum][cur] + dp[sum - cur * prv][prv]) % MOD;
                }
                if(sum == n) ans = (ans + dp[sum][cur]) % MOD;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
