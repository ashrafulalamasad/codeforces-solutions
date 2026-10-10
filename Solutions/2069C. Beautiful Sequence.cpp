#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n;
        vector<ll> dp(4, 0);
        dp[0] = 1;
        for(ll i = 0; i < n; i++){
            ll x; cin >> x;
            if(x == 2) dp[x] = (dp[x] + dp[x]) % 998244353;
            dp[x] = (dp[x] + dp[x - 1]) % 998244353;
        }
        cout << dp[3] << endl;
    }
    return 0;
}
