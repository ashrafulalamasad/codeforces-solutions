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
		ll d = x - y + 1;
		cout << (d >= 0 && d % 9 == 0 ? "YES" : "NO") << endl;
	}
	return 0;
}
