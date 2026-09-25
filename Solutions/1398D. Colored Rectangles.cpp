#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll R, G, B; cin >> R >> G >> B;
    vector<ll> r(R), g(G), b(B);
    for(ll i = 0; i < R; i++) cin >> r[i];
    for(ll i = 0; i < G; i++) cin >> g[i];
    for(ll i = 0; i < B; i++) cin >> b[i];
    sort(r.begin(), r.end(), greater<ll>());
    sort(g.begin(), g.end(), greater<ll>());
    sort(b.begin(), b.end(), greater<ll>());
    static ll dp[205][205][205];
    ll ans = 0;
    for(ll i = 0; i <= R; i++){
        for(ll j = 0; j <= G; j++){
            for(ll k = 0; k <= B; k++){
                if(i < R && j < G) dp[i + 1][j + 1][k] = max(dp[i + 1][j + 1][k], dp[i][j][k] + r[i] * g[j]);
                if(i < R && k < B) dp[i + 1][j][k + 1] = max(dp[i + 1][j][k + 1], dp[i][j][k] + r[i] * b[k]);
                if(j < G && k < B) dp[i][j + 1][k + 1] = max(dp[i][j + 1][k + 1], dp[i][j][k] + g[j] * b[k]);
                ans = max({ans, dp[i][j][k]});
            }
        }
    }
    cout << ans << endl;
    return 0;
}
