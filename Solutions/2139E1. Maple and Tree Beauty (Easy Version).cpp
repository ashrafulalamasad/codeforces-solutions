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
        vector<ll> fa(n, -1), dep(n, 0), noson(n, 1), cnt(n + 1, 0);
        cnt[0]++;
        for(ll i = 1; i < n; i++){
            cin >> fa[i];
            fa[i]--;
            dep[i] = dep[fa[i]] + 1;
            cnt[dep[i]]++;
            noson[fa[i]] = 0;
        }
        ll sum = 0, mxdep = 4000000000LL;
        for(ll i = 0; i < n; i++) if(noson[i]) mxdep = min(mxdep, dep[i]);
        vector<ll> dp(n + 1, 0); dp[0] = 1;
        for(ll i = 0; i <= mxdep; i++){
            for(ll j = sum; j >= 0; j--) dp[j + cnt[i]] = dp[j + cnt[i]] | dp[j];
            sum += cnt[i];
        }
        ll ans = mxdep;
        if(sum <= k || sum <= n - k) ans = mxdep + 1;
        else{
            for(ll i = 0; i <= sum; i++) if(dp[i] && i <= k && sum - i <= n - k) ans = mxdep + 1;
        }
        cout << ans << endl;
    }
    return 0;
}
