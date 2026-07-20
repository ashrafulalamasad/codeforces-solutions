#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin >> t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n; cin >> n; vector<ll> a(n);
		for(ll i = 0; i < n; i++) cin >> a[i];
		ll ans = 0, cur = a[0];
		for(ll i = 1; i < n; i++){
			if((a[i] > 0 && cur > 0) || (a[i] < 0 && cur < 0)){
				cur = max(cur, a[i]);
			}else{
				ans += cur;
				cur = a[i];
			}
		}
		ans += cur;
		cout << ans << endl;
	}
	return 0;
}
