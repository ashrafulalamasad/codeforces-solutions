#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll r, s, p; cin >> r >> s >> p;
    vector<vector<vector<double>>> dp(r + 1, vector<vector<double>>(s + 1, vector<double>(p + 1, 0.0)));
    dp[r][s][p] = 1.0;
    for(ll i = r; i >= 0; i--){
        for(ll j = s; j >= 0; j--){
            for(ll k = p; k >= 0; k--){
                double cur = dp[i][j][k];
                if(cur == 0.0) continue;
                if((i > 0) + (j > 0) + (k > 0) <= 1) continue;
                double tot = (double)(i * j + j * k + k * i);
                if(tot == 0.0) continue;
                if(j > 0){
                    dp[i][j - 1][k] = dp[i][j - 1][k] + cur * (double)(i * j) / tot;
                }
                if(k > 0){
                    dp[i][j][k - 1] = dp[i][j][k - 1] + cur * (double)(j * k) / tot;
                }
                if(i > 0){
                    dp[i - 1][j][k] = dp[i - 1][j][k] + cur * (double)(k * i) / tot;
                }
            }
        }
    }
    double ansR = 0.0, ansS = 0.0, ansP = 0.0;
    for(ll i = 1; i <= r; i++) ansR = ansR + dp[i][0][0];
    for(ll j = 1; j <= s; j++) ansS = ansS + dp[0][j][0];
    for(ll k = 1; k <= p; k++) ansP = ansP + dp[0][0][k];
    cout << fixed << setprecision(12) << ansR << " " << ansS << " " << ansP << endl;
    return 0;
}
