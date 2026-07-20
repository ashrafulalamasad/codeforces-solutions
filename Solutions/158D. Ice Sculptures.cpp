#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	ll n; cin >> n; vector<ll> t(n);
	for(ll i=0; i<n; i++) cin >> t[i];
	vector<ll> divisors;
	for(ll d=1; d*d<=n; d++){
		if(n % d == 0){
			divisors.push_back(d);
			if(d != n/d) divisors.push_back(n/d);
		}
	}
	ll ans = LLONG_MIN;
	for(ll m: divisors){
		if(m < 3) continue;
		ll step = n / m;
		for(ll r=0; r<step; r++){
			ll sum = 0;
			for(ll j=0; j<m; j++) sum += t[r + j*step];
			ans = max(ans, sum);
		}
	}
	cout << ans << endl;
	return 0;
}
