#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<ll> t(n), w(n);
    ll totalW = 0, totalT = 0;
    for(ll i = 0; i < n; i++){
        cin >> t[i] >> w[i];
        totalW = totalW + w[i];
        totalT = totalT + t[i];
    }
    vector<ll> dp(totalT + 1, -1); dp[0] = 0;
    for(ll i = 0; i < n; i++){
        for(ll s = totalT - t[i]; s >= 0; s--){
            if(dp[s] >= 0) dp[s + t[i]] = max(dp[s + t[i]], dp[s] + w[i]);
        }
    }
    for(ll s = 0; s <= totalT; s++){
        if(dp[s] >= totalW - s){
            cout << s << endl;
            return 0;
        }
    }
    return 0;
}
