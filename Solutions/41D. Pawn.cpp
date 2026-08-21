#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, m, k; cin >> n >> m >> k; ll mod = k + 1;
    static ll board[100][100];
    for(ll i = 0; i < n; i++){
        string s; cin >> s;
        for(ll j = 0; j < m; j++){
            board[i][j] = s[j] - '0';
        }
    }
    static ll dp[100][100][11];
    static ll par[100][100][11];
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < m; j++){
            for(ll r = 0; r < mod; r++){
                dp[i][j][r] = -1;
                par[i][j][r] = -1;
            }
        }
    }
    for(ll c = 0; c < m; c++){
        ll val = board[n - 1][c];
        dp[n - 1][c][val % mod] = val;
    }
    for(ll r = n - 1; r >= 1; r--){
        for(ll c = 0; c < m; c++){
            for(ll rem = 0; rem < mod; rem++){
                if(dp[r][c][rem] == -1){
                    continue;
                }
                if(c > 0){
                    ll nc = c - 1;
                    ll val = board[r - 1][nc];
                    ll nrem = (rem + val) % mod;
                    ll nsum = dp[r][c][rem] + val;
                    if(nsum > dp[r - 1][nc][nrem]){
                        dp[r - 1][nc][nrem] = nsum;
                        par[r - 1][nc][nrem] = c;
                    }
                }
                if(c < m - 1){
                    ll nc = c + 1;
                    ll val = board[r - 1][nc];
                    ll nrem = (rem + val) % mod;
                    ll nsum = dp[r][c][rem] + val;
                    if(nsum > dp[r - 1][nc][nrem]){
                        dp[r - 1][nc][nrem] = nsum;
                        par[r - 1][nc][nrem] = c;
                    }
                }
            }
        }
    }
    ll best = -1, bestCol = -1;
    for(ll c = 0; c < m; c++){
        if(dp[0][c][0] > best){
            best = dp[0][c][0];
            bestCol = c;
        }
    }
    if(best == -1){
        cout << -1 << endl;
        return 0;
    }
    string rev = "";
    ll c = bestCol;
    ll rem = 0;
    for(ll r = 0; r < n - 1; r++){
        ll pc = par[r][c][rem];
        if(c == pc + 1){
            rev += 'R';
        }else{
            rev += 'L';
        }
        rem = (rem - board[r][c] % mod + mod) % mod;
        c = pc;
    }
    reverse(rev.begin(), rev.end());
    cout << best << endl;
    cout << c + 1 << endl;
    cout << rev << endl;
    return 0;
}
