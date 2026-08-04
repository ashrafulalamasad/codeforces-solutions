#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, a, b, c; cin >> n >> a >> b >> c;
    vector<ll> dp(n + 1, -1e18);
    dp[0] = 0;
    for(ll i = 1; i <= n; i++){
        if(i >= a) dp[i] = max(dp[i], dp[i - a] + 1);
        if(i >= b) dp[i] = max(dp[i], dp[i - b] + 1);
        if(i >= c) dp[i] = max(dp[i], dp[i - c] + 1);
    }
    cout << dp[n] << endl;
    return 0;
}
