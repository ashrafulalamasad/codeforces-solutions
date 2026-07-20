#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n; cin >> n;
		string s1, s2; cin >> s1 >> s2;
		vector<ll> v(n+1), h(n+1), dp(n+1);
		for(ll i=1; i<=n; i++) v[i] = (s1[i-1] != s2[i-1]);
		for(ll i=1; i<n; i++) h[i] = (s1[i-1] != s1[i]) + (s2[i-1] != s2[i]);
		dp[0] = 0;
		for(ll i=1; i<=n; i++){
			dp[i] = dp[i-1] + v[i];
			if(i>=2) dp[i] = min(dp[i], dp[i-2] + h[i-1]);
		}
		cout << dp[n] << endl;
	}
	return 0;
}
