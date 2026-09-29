#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    string s; cin >> s;
    const ll neg = -1000000000;
    ll dp[4] = {neg, neg, neg, neg};
    ll digit = s[0] - '0';
    dp[digit ? digit % 3 : 3] = 0;
    for(ll i = 1; i < s.size(); i++){
        digit = s[i] - '0';
        ll next[4] = {neg, neg, neg, neg};
        for(ll state = 0; state < 4; state++){
            if(dp[state] == neg) continue;
            if(state != 3) next[(state * 10 + digit) % 3] = max(next[(state * 10 + digit) % 3], dp[state]);
            next[digit ? digit % 3 : 3] = max(next[digit ? digit % 3 : 3], dp[state] + (state == 0 || state == 3));
        }
        for(ll state = 0; state < 4; state++) dp[state] = next[state];
    }
    ll ans = 0;
    for(ll state = 0; state < 4; state++) ans = max(ans, dp[state] + (state == 0 || state == 3));
    cout << ans << endl;
    return 0;
}
