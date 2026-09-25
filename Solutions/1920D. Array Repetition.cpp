#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, q; cin >> n >> q;
        vector<ll> dp(n + 1, 0), lstAdd(n + 1, 0);
        for(ll i = 1; i <= n; i++){
            ll a, v; cin >> a >> v;
            if(a == 1){
                lstAdd[i] = v;
                dp[i] = dp[i - 1] + 1;
            }else{
                lstAdd[i] = lstAdd[i - 1];
                if(v + 1 > 2e18 / dp[i - 1]) dp[i] = 2e18;
                else dp[i] = dp[i - 1] * (v + 1);
            }
        }
        while(q--){
            ll k; cin >> k;
            while(true){
                ll pos = lower_bound(dp.begin() + 1, dp.end(), k) - dp.begin();
                if(dp[pos] == k){
                    cout << lstAdd[pos] << " ";
                    break;
                }
                if(k % dp[pos - 1] == 0){
                    cout << lstAdd[pos - 1] << " ";
                    break;
                }
                k %= dp[pos - 1];
            }
        }
        cout << endl;
    }
    return 0;
}
