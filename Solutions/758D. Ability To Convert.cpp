#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t; cin >> t; while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;
    ll n; string s; cin >> n >> s;
    ll len = s.size();
    vector<ll> dp(len + 1, 1e18);
    dp[0] = 0;
    for(ll i = 1; i <= len; ++i){
        for(ll j = i - 1; j >= 0; --j){
            if(i - j > 1 && s[j] == '0') continue;
            ll val = 0;
            bool ok = true;
            for(ll p = j; p < i; ++p){
                val = val * 10 + (s[p] - '0');
                if(val >= n){ ok = false; break; }
            }
            if(!ok) continue;
            if(dp[j] > (ll)1e18 / n) continue;
            dp[i] = min(dp[i], dp[j] * n + val);
        }
    }
    cout << dp[len] << endl;
    return 0;
}
