#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> h(n);
        for(ll i = 0; i < n; i++) cin >> h[i];
        vector<ll> dp(n + 1, 0); dp[1] = h[0];
        for(ll i = 1; i < n; i++){
            dp[i + 1] = min(dp[i] + h[i] - 1, dp[i - 1] + h[i - 1] + max(0LL, h[i] - i));
        }
        cout << dp[n] << endl;
    }
    return 0;
}
