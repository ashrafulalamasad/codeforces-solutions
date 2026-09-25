#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, m, k; cin >> n >> m >> k; vector<ll> c(n);
    for(ll i = 0; i < n; i++) cin >> c[i];
    vector<vector<ll>> p(n, vector<ll>(m + 1));
    for(ll i = 0; i < n; i++){
        for(ll j = 1; j <= m; j++) cin >> p[i][j];
    }
    ll INF = 4e18;
    vector<vector<ll>> dp(m + 1, vector<ll>(k + 1, INF));
    if(c[0]) dp[c[0]][1] = 0;
    else for(ll j = 1; j <= m; j++) dp[j][1] = p[0][j];
    for(ll i = 1; i < n; i++){
        vector<vector<ll>> nd(m + 1, vector<ll>(k + 1, INF));
        for(ll t = 1; t <= k; t++){
            ll mn = INF, mn2 = INF, id = -1;
            for(ll l = 1; l <= m; l++){
                ll v = dp[l][t - 1];
                if(id == -1 || v < mn) mn2 = mn, mn = v, id = l;
                else if(v < mn2) mn2 = v;
            }
            for(ll j = 1; j <= m; j++){
                if(c[i] && j != c[i]) continue;
                ll best = dp[j][t];
                if(t > 1 && (id != j ? mn : mn2) < best) best = id != j ? mn : mn2;
                if(best < INF) nd[j][t] = best + (c[i] ? 0 : p[i][j]);
            }
        }
        dp = nd;
    }
    ll ans = INF;
    for(ll j = 1; j <= m; j++) ans = min(ans, dp[j][k]);
    cout << (ans >= INF ? -1 : ans) << endl;
    return 0;
}
