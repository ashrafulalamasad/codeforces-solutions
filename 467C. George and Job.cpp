#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, m, k; cin >> n >> m >> k;
    ll p[n + 1];
    ll pref[n + 1]; pref[0] = 0;
    for(ll i = 1; i <= n; i++){cin >> p[i]; pref[i] = pref[i - 1] + p[i];}
    ll dp[n + 1][k + 1];
    for(ll i = 0; i <= n; i++) dp[i][0] = 0;
    for(ll j = 1; j <= k; j++) dp[0][j] = 0;
    for(ll i = 1; i <= n; i++){
        for(ll j = 1; j <= k; j++){
            dp[i][j] = dp[i - 1][j];
            if(i >= m) dp[i][j] = max(dp[i][j], dp[i - m][j - 1] + pref[i] - pref[i - m]);
        }
    }
    cout << dp[n][k] << endl;
    return 0;
}
