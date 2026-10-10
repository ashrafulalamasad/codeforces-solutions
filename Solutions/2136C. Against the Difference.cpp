#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n), dp(n + 1);
        for(ll i = 0; i < n; i++) cin >> a[i];
        vector<deque<ll>> q(n + 1);
        for(ll i = 0; i < n; i++){
            dp[i + 1] = dp[i];
            ll v = a[i];
            q[v].push_back(i);
            if((ll)q[v].size() > v) q[v].pop_front();
            if((ll)q[v].size() == v) dp[i + 1] = max(dp[i + 1], dp[q[v].front()] + v);
        }
        cout << dp[n] << endl;
    }
    return 0;
}
