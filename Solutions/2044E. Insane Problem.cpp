#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll k, l1, r1, l2, r2; cin >> k >> l1 >> r1 >> l2 >> r2;
		ll ans = 0, p = 1;
		while(p <= r2){
			ll lo = max(l1, (l2 + p - 1) / p);
			ll hi = min(r1, r2 / p);
			if(lo <= hi) ans += hi - lo + 1;
			if(p > r2 / k) break;
			p *= k;
		}
		cout << ans << endl;
	}
	return 0;
}
