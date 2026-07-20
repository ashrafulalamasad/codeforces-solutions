#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n, x; cin >> n >> x;
		vector<ll> a(n);
		for(ll i = 0; i < n; i++) cin >> a[i];
		sort(a.rbegin(), a.rend());
		ll ans = 0, cnt = 0;
		for(ll i = 0; i < n; i++){
			cnt++;
			if(a[i] * cnt >= x){ ans++; cnt = 0; }
		}
		cout << ans << endl;
	}
	return 0;
}
