#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll minX = 1e18, maxX = -1e18;
		for(ll i = 0; i < 4; i++){
			ll x, y; cin >> x >> y;
			minX = min(minX, x);
			maxX = max(maxX, x);
		}
		ll side = maxX - minX;
		cout << side * side << endl;
	}
	return 0;
}
