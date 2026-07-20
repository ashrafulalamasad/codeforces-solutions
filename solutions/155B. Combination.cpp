#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<pair<ll,ll>> cards(n);
    for(ll i=0; i<n; i++) cin >> cards[i].first >> cards[i].second;
    vector<int> idx(n);
    for(int i=0; i<n; i++) idx[i]=i;
    sort(idx.begin(), idx.end(), [&](int i, int j){
        return cards[i].second > cards[j].second;
    });
    const ll NEG = (ll)-9e18;
    vector<ll> dp(n+1, NEG), dp2;
    dp[1] = 0;
    for(int id: idx){
        ll a = cards[id].first;
        ll b = cards[id].second;
        dp2 = dp;
        for(ll r=1; r<=n; r++){
            if(dp[r]==NEG) continue;
            ll newr = r - 1 + b;
            if(newr > n) newr = n;
            dp2[newr] = max(dp2[newr], dp[r] + a);
        }
        dp.swap(dp2);
    }
    ll ans = 0;
    for(ll r=0; r<=n; r++) ans = max(ans, dp[r]);
    cout << ans << endl;
    return 0;
}
