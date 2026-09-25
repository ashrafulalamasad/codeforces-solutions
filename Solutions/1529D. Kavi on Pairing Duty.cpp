#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    ll mod = 998244353;
    vector<ll> dp(n + 1, 0);
    for(ll i = 1; i <= n; i++){
        for(ll j = i + i; j <= n; j += i){
            dp[j]++;
        }
    }
    dp[0] = 1; ll S = 1;
    for(ll i = 1; i <= n; i++){
        dp[i] = (dp[i] + S) % mod;
        S = (S + dp[i]) % mod;
    }
    cout << dp[n] << endl;
    return 0;
}
