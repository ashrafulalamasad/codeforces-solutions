#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m, k, d; cin >> n >> m >> k >> d;
        vector<ll> cost(n), dp(m);
        for(ll i = 0; i < n; i++){
            vector<ll> a(m);
            for(ll j = 0; j < m; j++) cin >> a[j];
            deque<ll> dq; dp[0] = 1; dq.push_back(0);
            for(ll j = 1; j < m; j++){
                while(!dq.empty() && dq.front() < j - d - 1) dq.pop_front();
                dp[j] = dp[dq.front()] + a[j] + 1;
                while(!dq.empty() && dp[dq.back()] >= dp[j]) dq.pop_back();
                dq.push_back(j);
            }
            cost[i] = dp[m - 1];
        }
        ll sum = 0;
        for(ll i = 0; i < k; i++) sum += cost[i];
        ll ans = sum;
        for(ll i = k; i < n; i++){
            sum += cost[i] - cost[i - k];
            ans = min(ans, sum);
        }
        cout << ans << endl;
    }
    return 0;
}
