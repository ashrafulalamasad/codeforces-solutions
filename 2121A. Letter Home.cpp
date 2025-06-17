#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n, s; cin >> n >> s;
		vector<ll>x(n);
		for(ll i = 0; i < n; i++) cin >> x[i];
		ll l = x[0], r = x[n - 1];
		ll ans = (r - l) + min(abs(s - l), abs(s - r));
		cout << ans << endl;
	}
	return 0;
}
