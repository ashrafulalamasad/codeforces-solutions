#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<ll> a(n), pos;
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < n; i++) if(a[i] == 1) pos.push_back(i);
    ll k = pos.size(), INF = 4000000000000000000;
    vector<vector<ll>> dp(n + 1, vector<ll>(k + 1, INF));
    dp[0][0] = 0;
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j <= k; j++){
            if(dp[i][j] == INF) continue;
            if(dp[i + 1][j] > dp[i][j]) dp[i + 1][j] = dp[i][j];
            if(j < k && a[i] == 0){
                ll cur = dp[i][j] + abs(pos[j] - i);
                if(cur < dp[i + 1][j + 1]) dp[i + 1][j + 1] = cur;
            }
        }
    }
    cout << dp[n][k] << endl;
    return 0;
}
