#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll lcmll(ll a, ll b){
	return a/__gcd(a,b)*b;
}

int main()
{
	fast;
	tc{
		ll n; cin >> n;
		vector<ll> a(n+1), b(n+1), g(n), req(n+1);
		for(ll i=1; i<=n; i++)cin >> a[i];
		for(ll i=1; i<=n; i++)cin >> b[i];
		for(ll i=1; i<n; i++)g[i] = __gcd(a[i], a[i+1]);
		req[1] = g[1]; req[n] = g[n-1];
		for(ll i=2; i<=n-1; i++)req[i] = lcmll(g[i-1],g[i]);
		ll ans = 0;
		for(ll i=1; i<=n; i++)if(a[i]>req[i])ans++;
		cout << ans << endl;
	}
	return 0;
}
