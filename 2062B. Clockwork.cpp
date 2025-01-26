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
		bool ok = true;
		for(ll i = 0; i < n; i++)
			if(a[i] <= 2 * i || a[i] <= 2 * (n - 1 - i)) ok = false;
		cout << (ok ? "YES" : "NO") << endl;
	}
	return 0;
}
