#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        string s; cin >> s;
        ll n = (ll)s.size();
        const ll INF = 1e18;
        vector<ll> pre0(n), pre1(n);
        ll dp0 = 0, dp1 = 0;
        if(s[0] == '0'){
            dp1 = INF;
        }else if(s[0] == '1'){
            dp0 = INF;
        }
        for(ll i = 1; i < n; i++){
            ll ndp0 = INF, ndp1 = INF;
            bool can0 = (s[i] == '0' || s[i] == '?');
            bool can1 = (s[i] == '1' || s[i] == '?');
            if(can0){
                if(dp0 != INF && dp0 < ndp0){
                    ndp0 = dp0;
                    pre0[i] = 0;
                }
                if(dp1 != INF && dp1 + 1 < ndp0){
                    ndp0 = dp1 + 1;
                    pre0[i] = 1;
                }
            }
            if(can1){
                if(dp0 != INF && dp0 < ndp1){
                    ndp1 = dp0;
                    pre1[i] = 0;
                }
                if(dp1 != INF && dp1 < ndp1){
                    ndp1 = dp1;
                    pre1[i] = 1;
                }
            }
            dp0 = ndp0;
            dp1 = ndp1;
        }
        ll bit;
        if(dp1 < dp0){
            bit = 1;
        }else{
            bit = 0;
        }
        string ans(n, '0');
        for(ll i = n - 1; i >= 0; i--){
            ans[i] = char('0' + bit);
            if(i > 0){
                if(bit == 0){
                    bit = pre0[i];
                }else{
                    bit = pre1[i];
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
