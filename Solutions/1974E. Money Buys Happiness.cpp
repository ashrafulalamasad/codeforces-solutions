#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll m, x, total = 0; cin >> m >> x;
        vector<ll> cost(m), happiness(m);
        for(ll i = 0; i < m; i++){
            cin >> cost[i] >> happiness[i];
            total += happiness[i];
        }
        ll inf = LLONG_MAX / 4;
        vector<ll> dp(total + 1, inf);
        dp[0] = 0; ll current = 0;
        for(ll i = 0; i < m; i++){
            for(ll j = current; j >= 0; j--){
                if(dp[j] != inf && dp[j] + cost[i] <= i * x){
                    dp[j + happiness[i]] = min(dp[j + happiness[i]], dp[j] + cost[i]);
                }
            }
            current += happiness[i];
        }
        ll ans = 0;
        for(ll i = 0; i <= total; i++){
            if(dp[i] != inf){
                ans = i;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
