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
		for(ll i = 0; i < n; i++) cin >> a[i];
		ll G = a[0];
		for(ll i = 1; i < n; i++) G = __gcd(G, a[i]);
		ll cntG = 0;
		for(ll x : a) if(x == G) cntG++;
		if(cntG > 0){
			cout << n - cntG << endl;
			continue;
		}
		ll maxA = *max_element(a.begin(), a.end());
		ll INF = n + 1;
		vector<ll> dp(maxA + 1, INF);
		for(ll v : a){
			vector<ll> ndp = dp;
			ndp[v] = 1;
			for(ll x = 1; x <= maxA; x++){
				if(dp[x] < INF){
					ll g = __gcd(x, v);
					ndp[g] = min(ndp[g], dp[x] + 1);
				}
			}
			dp = ndp;
		}
		cout << n + dp[G] - 2 << endl;
	}
	return 0;
}
