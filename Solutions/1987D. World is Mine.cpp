#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n), c;
        for(ll i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        for(ll i = 0; i < n; i++){
            if(i == 0 || a[i] != a[i - 1]) c.push_back(1);
            else c.back()++;
        }
        ll m = c.size(), inf = 1000000000;
        vector<ll> dp(m + 1, inf); dp[0] = 0;
        for(ll i = 1; i <= m; i++){
            vector<ll> ndp = dp;
            for(ll k = 1; k <= m; k++){
                ll nv = dp[k - 1] + c[i - 1];
                if(nv <= i - k && nv < ndp[k]) ndp[k] = nv;
            }
            dp = ndp;
        }
        ll best = 0;
        for(ll k = 0; k <= m; k++) if(dp[k] < inf) best = k;
        cout << m - best << endl;
    }
    return 0;
}
