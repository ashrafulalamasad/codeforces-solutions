#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		vector<ll> a(7);
		ll sum = 0, mx = -1e18;
		for(ll i=0; i<7; i++){
			cin >> a[i];
			sum += a[i];
			mx = max(mx, a[i]);
		}
		cout << (2 * mx - sum) << endl;
	}
	return 0;
}
