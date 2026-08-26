#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll k; string s; cin >> k >> s;
    ll nLeaves = 1LL << k, cur = 1;
    vector<ll> nodeAt(nLeaves);
    for(ll depth = k - 1; depth >= 0; depth--){
        ll start = 1LL << depth, cnt = 1LL << depth;
        for(ll j = 0; j < cnt; j++){
            nodeAt[cur] = start + j;
            cur++;
        }
    }
    vector<char> ch(2 * nLeaves, '?');
    for(ll i = 1; i < nLeaves; i++) ch[nodeAt[i]] = s[i - 1];
    vector<ll> dp(2 * nLeaves, 0);
    for(ll i = nLeaves; i < 2 * nLeaves; i++) dp[i] = 1;
    auto value = [&](ll v) -> ll {
        if(ch[v] == '0'){
            return dp[v * 2];
        }else if(ch[v] == '1'){
            return dp[v * 2 + 1];
        }else{
            return dp[v * 2] + dp[v * 2 + 1];
        }
    };
    for(ll v = nLeaves - 1; v >= 1; v--) dp[v] = value(v);
    ll q; cin >> q;
    while(q--){
        ll p; char c; cin >> p >> c;
        ll v = nodeAt[p];
        ch[v] = c;
        while(v >= 1){
            dp[v] = value(v);
            v /= 2;
        }
        cout << dp[1] << endl;
    }
    return 0;
}
