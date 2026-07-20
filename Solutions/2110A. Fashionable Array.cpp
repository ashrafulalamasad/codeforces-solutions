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
		sort(a.begin(), a.end());
		ll mn = a[0], mx = a.back();
		if((mn + mx) % 2 == 0){ cout << 0 << endl; continue; }
		ll ans = n;
		for(ll i = 0; i < n; i++)
			if(a[i] % 2 == mx % 2){ ans = min(ans, i); break; }
		for(ll i = n - 1; i >= 0; i--)
			if(a[i] % 2 == mn % 2){ ans = min(ans, n - 1 - i); break; }
		cout << ans << endl;
	}
	return 0;
}
