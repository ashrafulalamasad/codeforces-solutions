#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    vector<vector<ll>> dp(n, vector<ll>(n, 0));
    for(ll length = 2; length <= n; length++){
        for(ll left = 0; left + length <= n; left++){
            ll right = left + length - 1;
            dp[left][right] = min(dp[left + 1][right], dp[left][right - 1]) + a[right] - a[left];
        }
    }
    cout << dp[0][n - 1] << endl;
    return 0;
}
