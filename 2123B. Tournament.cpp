#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n, j, k; cin >> n >> j >> k;
		vector<ll> a(n + 5);
		ll mx = 0;
		for(ll i = 1; i <= n; i++){
			cin >> a[i];
			mx = max(mx, a[i]);
		}
		if(k == 1) cout << (a[j] == mx ? "YES" : "NO") << endl;
		else cout << "YES" << endl;
	}
	return 0;
}
