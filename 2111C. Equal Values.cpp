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
		ll ans = 1e18;
		for(ll i = 0; i < n; ){
			ll j = i;
			while(j < n && a[j] == a[i]) j++;
			ll v = a[i];
			ans = min(ans, i * v + (n - j) * v);
			i = j;
		}
		cout << ans << endl;
	}
	return 0;
}
