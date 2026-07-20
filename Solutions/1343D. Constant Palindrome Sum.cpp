#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin >> t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n, k; cin >> n >> k; vector<ll> a(n);
		for(ll i = 0; i < n; i++) cin >> a[i];
		vector<ll> cnt(2 * k + 2, 0); vector<ll> diff(2 * k + 3, 0);
		for(ll i = 0; i < n / 2; i++){
			ll x = a[i], y = a[n - 1 - i];
			cnt[x + y]++;
			ll l = min(x, y) + 1;
			ll r = max(x, y) + k;
			diff[l]++;
			diff[r + 1]--;
		}
		ll pairs = n / 2, oneChange = 0, ans = (ll)4e18;
		for(ll s = 2; s <= 2 * k; s++){
			oneChange += diff[s];
			ll zeroChange = cnt[s];
			ll needOne = oneChange - zeroChange;
			ll needTwo = pairs - oneChange;
			ll cost = needOne + 2 * needTwo;
			ans = min(ans, cost);
		}
		cout << ans << endl;
	}
	return 0;
}
