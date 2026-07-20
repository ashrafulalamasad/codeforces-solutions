#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<ll> l(n), c(n);
    for(ll i=0; i<n; i++) cin >> l[i];
    for(ll i=0; i<n; i++) cin >> c[i];
    unordered_map<ll,ll> dp;
    for(ll i=0; i<n; i++){
        unordered_map<ll,ll> ndp(dp);
        if(ndp.find(l[i]) == ndp.end() || ndp[l[i]] > c[i]) ndp[l[i]] = c[i];
        for(auto &p: dp){
            ll g = std::gcd(p.first, l[i]);
            ll cost = p.second + c[i];
            if(ndp.find(g) == ndp.end() || ndp[g] > cost) ndp[g] = cost;
        }
        dp.swap(ndp);
    }
    if(dp.find(1) == dp.end()) cout << -1 << endl; else cout << dp[1] << endl;
    return 0;
}
