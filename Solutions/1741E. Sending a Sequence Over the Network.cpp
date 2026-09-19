#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> b(n);
        for(ll i = 0; i < n; i++) cin >> b[i];
        vector<ll> dp(n + 1, 0); dp[0] = 1;
        for(ll i = 0; i < n; i++){
            if(dp[i] && b[i] <= n && i + 1 + b[i] <= n) dp[i + 1 + b[i]] = 1;
            if(b[i] <= i && dp[i - b[i]]) dp[i + 1] = 1;
        }
        if(dp[n]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
