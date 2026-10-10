#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, m, k; cin >> n >> m >> k; vector<vector<ll>> h(n, vector<ll>(m - 1));
    for(ll i = 0; i < n; i++) for(ll j = 0; j < m - 1; j++) cin >> h[i][j];
    vector<vector<ll>> v(n - 1, vector<ll>(m));
    for(ll i = 0; i < n - 1; i++) for(ll j = 0; j < m; j++) cin >> v[i][j];
    if(k % 2 == 1){
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < m; j++) cout << -1 << " ";
            cout << endl;
        }
        return 0;
    }
    vector<vector<ll>> dp(n, vector<ll>(m, 0));
    for(ll step = 0; step < k / 2; step++){
        vector<vector<ll>> nd(n, vector<ll>(m, 0));
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < m; j++){
                ll best = LLONG_MAX;
                if(j > 0) best = min(best, h[i][j - 1] + dp[i][j - 1]);
                if(j < m - 1) best = min(best, h[i][j] + dp[i][j + 1]);
                if(i > 0) best = min(best, v[i - 1][j] + dp[i - 1][j]);
                if(i < n - 1) best = min(best, v[i][j] + dp[i + 1][j]);
                nd[i][j] = best;
            }
        }
        dp = nd;
    }
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < m; j++) cout << 2 * dp[i][j] << " ";
        cout << endl;
    }
    return 0;
}
