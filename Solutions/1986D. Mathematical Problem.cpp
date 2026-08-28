#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; string s; cin >> n >> s; ll ans = 1e18;
        for(ll j = 0; j + 1 < n; j++){
            vector<ll> values;
            for(ll i = 0; i < n; i++){
                if(i == j){
                    values.push_back((s[i] - '0') * 10 + s[i + 1] - '0');
                    i++;
                }else values.push_back(s[i] - '0');
            }
            ll size = values.size();
            vector<ll> dp(size + 1, 1e18); dp[0] = 0;
            for(ll r = 1; r <= size; r++){
                ll product = 1;
                for(ll left = r; left >= 1; left--){
                    if(product > 1e18 / values[left - 1]) product = 1e18;
                    else product *= values[left - 1];
                    dp[r] = min(dp[r], dp[left - 1] + product);
                }
            }
            ans = min(ans, dp[size]);
        }
        cout << ans << endl;
    }
    return 0;
}
