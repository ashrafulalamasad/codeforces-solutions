#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll q, d; cin >> q >> d;
        ll mx = d * 10;
        vector<ll> dp(mx + 1, 0);
        dp[0] = 1;
        for(ll i = 0; 10 * i + d <= mx; i++){
            for(ll j = 0; 10 * i + d + j <= mx; j++) if(dp[j] == 1) dp[10 * i + d + j] = 1;
        }
        for(ll i = 0; i < q; i++){
            ll x; cin >> x;
            if(x >= mx) cout << "YES" << endl;
            else if(dp[x] == 1) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}
