#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k, mx = 0; cin >> n >> k; vector<ll> a(n);
        for(ll i = 0; i < n; i++){
            cin >> a[i];
            mx = max(mx, a[i]);
        }
        ll L = (n - 1) % k + 1, need = L / 2 + 1;
        vector<ll> dp(L + 1); ll lo = 1, hi = mx;
        auto can = [&](ll x) -> bool {
            fill(dp.begin(), dp.end(), -1);
            dp[0] = 0;
            for(ll i = 0; i < n; i++){
                ll r = i % k + 1;
                if(r <= L && dp[r - 1] != -1){
                    dp[r] = max(dp[r], dp[r - 1] + (a[i] >= x));
                }
            }
            return dp[L] >= need;
        };
        while(lo < hi){
            ll mid = (lo + hi + 1) / 2;
            if(can(mid)) lo = mid;
            else hi = mid - 1;
        }
        cout << lo << endl;
    }
    return 0;
}
