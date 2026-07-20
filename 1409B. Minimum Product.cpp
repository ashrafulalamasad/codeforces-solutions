#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll a, b, x, y, n; cin >> a >> b >> x >> y >> n;
		ll da = min(n, a - x);
		ll db = min(n, b - y);
		ll a1 = a - da, b1 = b - (n - da);
		if(b1 < y) b1 = y;
		ll a2 = a - (n - db), b2 = b - db;
		if(a2 < x) a2 = x;
		cout << min(a1 * b1, a2 * b2) << endl;
	}
	return 0;
}
