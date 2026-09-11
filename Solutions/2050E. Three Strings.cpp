#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        string a, b, c; cin >> a >> b >> c;
        ll n = a.size(), m = b.size();
        vector<vector<ll>> dp(n + 1, vector<ll>(m + 1, 1e9));
        dp[0][0] = 0;
        for(ll i = 0; i <= n; i++){
            for(ll j = 0; j <= m; j++){
                if(i == 0 && j == 0) continue;
                ll best = 1e9;
                if(i > 0){
                    ll cost = 0;
                    if(a[i - 1] != c[i + j - 1]){
                        cost = 1;
                    }
                    best = min(best, dp[i - 1][j] + cost);
                }
                if(j > 0){
                    ll cost = 0;
                    if(b[j - 1] != c[i + j - 1]){
                        cost = 1;
                    }
                    best = min(best, dp[i][j - 1] + cost);
                }
                dp[i][j] = best;
            }
        }
        cout << dp[n][m] << endl;
    }
    return 0;
}
