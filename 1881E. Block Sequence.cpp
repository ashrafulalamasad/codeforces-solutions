#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n; cin >> n; vector<ll> a(n);
		for(ll i=0; i<n; i++) cin >> a[i];
		vector<ll> dp(n+1, 0);
		for(ll i=n-1; i>=0; i--){
			dp[i] = 1 + dp[i+1];
			if(i+a[i]<n) dp[i] = min(dp[i], dp[i+a[i]+1]);
		}
		cout << dp[0] << endl;
	}
	return 0;
}
