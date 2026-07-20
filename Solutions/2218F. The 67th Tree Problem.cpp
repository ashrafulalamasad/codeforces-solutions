#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll x, y; cin >> x >> y;
		ll n = x + y;
		if(x > n / 2 || (n % 2 == 0 && x == 0)){
			cout << "NO" << endl;
			continue;
		}
		cout << "YES" << endl;
		ll k = x - (n % 2 == 0), m = n - 1 - 2 * k;
		ll cur = 2;
		for(ll i=0; i<k; i++){
			ll u = cur, v = cur + 1;
			cur += 2;
			cout << 1 << " " << u << endl;
			cout << u << " " << v << endl;
		}
		for(ll i=0; i<m; i++){
			cout << 1 << " " << cur << endl;
			cur++;
		}
	}
	return 0;
}
