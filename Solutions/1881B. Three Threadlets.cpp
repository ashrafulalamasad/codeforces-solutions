#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll a, b, c; cin >> a >> b >> c;
		ll g = __gcd(a, __gcd(b, c));
		ll pieces = a / g + b / g + c / g;
		if(pieces <= 6) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
