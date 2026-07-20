#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n; cin >> n; vector<ll> s(n);
		for(ll i = 0; i < n; i++) cin >> s[i];
		sort(s.begin(), s.end());
		ll ans = LLONG_MAX;
		for(ll i = 0; i + 1 < n; i++) ans = min(ans, s[i+1] - s[i]);
		cout << ans << endl;
	}
	return 0;
}
