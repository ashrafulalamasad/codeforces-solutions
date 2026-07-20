#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n+1);
        for(ll i = 1; i <= n; i++) cin >> a[i];
        vector<ll> dp(n+1,0);
        ll ans = 0;
        for(ll i = n; i >= 1; i--){
            if(i + a[i] > n) dp[i] = a[i];
            else dp[i] = a[i] + dp[i + a[i]];
            ans = max(ans, dp[i]);
        }
        cout << ans << endl;
    }
    return 0;
}
