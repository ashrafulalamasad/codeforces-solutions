#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<pair<ll, ll>> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i].first >> a[i].second;
    sort(a.begin(), a.end());
    vector<ll> dp(n + 1, 0);
    for(ll i = n - 1; i >= 0; i--){
        ll s = 0, best = 4000000000000000000;
        for(ll j = i; j < n; j++){
            if(j > i) s = s + a[j].first - a[i].first;
            ll cur = s + dp[j + 1] + a[i].second;
            if(cur < best) best = cur;
        }
        dp[i] = best;
    }
    cout << dp[0] << endl;
    return 0;
}
