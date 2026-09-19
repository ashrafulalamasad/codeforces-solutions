#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    const ll INFLL = (ll)4000000000000000000LL;
    tc{
        ll n; cin >> n; vector<ll> a(n + 2, 0);
        for(ll i = 1; i <= n; i++) cin >> a[i];
        vector<ll> pref(n + 1, 0);
        for(ll i = 1; i <= n; i++) pref[i] = pref[i - 1] + a[i];
        ll lo = 0, hi = pref[n];
        while(lo < hi){
            ll mid = (lo + hi) / 2;
            vector<ll> dp(n + 2, INFLL);
            dp[0] = 0; deque<ll> dq; dq.push_back(0);
            for(ll i = 1; i <= n + 1; i++){
                ll ai = i <= n ? a[i] : 0;
                ll prev = pref[i - 1];
                while(!dq.empty() && pref[dq.front()] < prev - mid) dq.pop_front();
                while(!dq.empty() && dp[dq.back()] >= dp[i - 1]) dq.pop_back();
                dq.push_back(i - 1);
                while(!dq.empty() && pref[dq.front()] < prev - mid) dq.pop_front();
                if(dq.empty()) dp[i] = INFLL;
                else if(dp[dq.front()] == INFLL) dp[i] = INFLL;
                else dp[i] = dp[dq.front()] + ai;
            }
            if(dp[n + 1] <= mid) hi = mid;
            else lo = mid + 1;
        }
        cout << lo << endl;
    }
    return 0;
}
