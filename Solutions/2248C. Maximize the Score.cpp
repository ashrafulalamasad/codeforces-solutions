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
        ll m = 2 * n;
        vector<ll> a(m), first(n + 1, -1);
        for(ll i = 0; i < m; i++){
            cin >> a[i];
            if(first[a[i]] == -1) first[a[i]] = i;
        }
        vector<ll> dp(m + 1, 0);
        for(ll i = 1; i <= m; i++){
            ll p = first[a[i - 1]];
            if(p == i - 1){
                dp[i] = dp[i - 1] + 1;
            }else{
                dp[i] = max(dp[i - 1] + 1, dp[p] + (i - p) * (i - p));
            }
        }
        cout << dp[m] << endl;
    }
    return 0;
}
