#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    string s; ll k; cin >> s >> k;
    vector<vector<bool>> f(26,vector<bool>(26,0));
    for(ll i=0; i<k; i++){
        string p; cin >> p;
        ll a = p[0]-'a', b = p[1]-'a';
        f[a][b] = f[b][a] = 1;
    }
    ll n = s.size();
    vector<ll> dp(26,0);
    for(char ch:s){
        ll c = ch-'a';
        ll nv = 1;
        for(ll p=0; p<26; p++)if(!f[p][c]) nv = max(nv, dp[p]+1);
        dp[c] = max(dp[c], nv);
    }
    ll mx = 0;
    for(auto x:dp) mx = max(mx, x);
    cout << n-mx << endl;
    return 0;
}
