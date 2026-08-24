#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k;
        vector<ll> a(n + 1), b(n + 1);
        for(ll i = 1; i <= n; i++) cin >> a[i];
        for(ll i = 1; i <= n; i++) cin >> b[i];
        ll max_c = n - k; const ll INF = 1e18;
        vector<vector<ll>> dp(2, vector<ll>(max_c + 1, -INF)); dp[0][0] = 0;
        vector<vector<vector<ll>>> M(max_c + 1, vector<vector<ll>>(2, vector<ll>(2, -INF)));
        for(ll i = 1; i <= n; i++){
            for(ll c = 0; c <= min(i, max_c); c++) dp[i % 2][c] = -INF;
            for(ll c = 0; c <= min(i, max_c); c++){
                ll val = -INF;
                if(c > 0 && dp[(i - 1) % 2][c - 1] != -INF){
                    val = max(val, dp[(i - 1) % 2][c - 1]);
                }
                if(dp[(i - 1) % 2][c] != -INF){
                    for(ll s1 = 0; s1 < 2; s1++){
                        for(ll s2 = 0; s2 < 2; s2++){
                            ll sign1 = s1 == 0 ? 1 : -1;
                            ll sign2 = s2 == 0 ? 1 : -1;
                            ll term = dp[(i - 1) % 2][c] + sign1 * b[i] - sign2 * a[i];
                            M[c][s1][s2] = max(M[c][s1][s2], term);
                        }
                    }
                }
                for(ll s1 = 0; s1 < 2; s1++){
                    for(ll s2 = 0; s2 < 2; s2++){
                        if(M[c][s1][s2] != -INF){
                            ll sign1 = s1 == 0 ? 1 : -1;
                            ll sign2 = s2 == 0 ? 1 : -1;
                            ll term = M[c][s1][s2] - sign1 * a[i] + sign2 * b[i];
                            val = max(val, term);
                        }
                    }
                }
                dp[i % 2][c] = val;
            }
        }
        cout << dp[n % 2][max_c] << endl;
    }
    return 0;
}
