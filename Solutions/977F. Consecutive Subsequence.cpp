#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    vector<ll> prev(n + 1, 0);
    map<ll, pair<ll, ll>> dp;
    ll bestLen = 0, bestIdx = 1;
    for(ll i = 1; i <= n; i++){
        ll x; cin >> x;
        ll len = 1, p = 0;
        auto it = dp.find(x - 1);
        if(it != dp.end()){
            len = it->second.first + 1;
            p = it->second.second;
        }
        prev[i] = p;
        auto cur = dp.find(x);
        if(cur == dp.end() || len > cur->second.first){
            dp[x] = {len, i};
        }
        if(len > bestLen){
            bestLen = len;
            bestIdx = i;
        }
    }
    vector<ll> ans;
    for(ll i = bestIdx; i != 0; i = prev[i]){
        ans.push_back(i);
    }
    reverse(ans.begin(), ans.end());
    cout << bestLen << endl;
    for(ll i = 0; i < (ll)ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
