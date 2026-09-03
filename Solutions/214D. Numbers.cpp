#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll MOD = 1000000007;

int main()
{
    fast;
    ll n; cin >> n; vector<ll> a(10);
    for(ll i = 0; i < 10; i++) cin >> a[i];
    vector<vector<ll>> C(n + 1, vector<ll>(n + 1, 0));
    for(ll i = 0; i <= n; i++){
        C[i][0] = 1;
        for(ll j = 1; j <= i; j++) C[i][j] = (C[i - 1][j - 1] + C[i - 1][j]) % MOD;
    }
    vector<vector<ll>> dp(11, vector<ll>(n + 1, 0));
    dp[10][0] = 1;
    for(ll d = 9; d >= 1; d--){
        for(ll j = 0; j <= n; j++){
            for(ll k = a[d]; k <= j; k++) dp[d][j] = (dp[d][j] + C[j][k] * dp[d + 1][j - k]) % MOD;
        }
    }
    ll ans = 0;
    for(ll len = 1; len <= n; len++){
        for(ll k = a[0]; k < len; k++) ans = (ans + C[len - 1][k] * dp[1][len - k]) % MOD;
    }
    cout << ans << endl;
    return 0;
}
