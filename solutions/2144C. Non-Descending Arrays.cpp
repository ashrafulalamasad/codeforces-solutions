#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const ll MOD = 998244353;

int main()
{
	fast;
	tc{
		ll n; cin >> n; vector<ll> a(n), b(n);
		for(ll i = 0; i < n; i++) cin >> a[i];
		for(ll i = 0; i < n; i++) cin >> b[i];
		vector<array<ll, 2>> dp(n);
		dp[0][0] = dp[0][1] = 1;
		for(ll i = 1; i < n; i++){
			for(ll p = 0; p < 2; p++){
				ll pa = p ? b[i-1] : a[i-1];
				ll pb = p ? a[i-1] : b[i-1];
				for(ll q = 0; q < 2; q++){
					ll ca = q ? b[i] : a[i];
					ll cb = q ? a[i] : b[i];
					if(pa <= ca && pb <= cb){
						dp[i][q] = (dp[i][q] + dp[i-1][p]) % MOD;
                    }
				}
			}
		}
		cout << (dp[n-1][0] + dp[n-1][1]) % MOD << endl;
	}
	return 0;
}
