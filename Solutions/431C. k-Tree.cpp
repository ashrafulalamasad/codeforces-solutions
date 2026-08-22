#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, k, d; cin >> n >> k >> d;
    const ll MOD = 1000000007;
    vector<vector<ll>> dp(n + 1, vector<ll>(2, 0));
    dp[0][0] = 1;
    for(ll sum = 0; sum <= n; sum++){
        for(ll used = 0; used <= 1; used++){
            if(dp[sum][used] == 0){
                continue;
            }
            for(ll w = 1; w <= k; w++){
                if(sum + w > n){
                    break;
                }
                ll nused = used;
                if(w >= d){
                    nused = 1;
                }
                dp[sum + w][nused] += dp[sum][used];
                if(dp[sum + w][nused] >= MOD){
                    dp[sum + w][nused] -= MOD;
                }
            }
        }
    }
    cout << dp[n][1] << endl;
    return 0;
}
