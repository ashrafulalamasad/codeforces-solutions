#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll m, a, b, c; cin >> m >> a >> b >> c;
		ll row1 = min(m, a);
		ll row2 = min(m, b);
		ll rem = (m - row1) + (m - row2);
		cout << row1 + row2 + min(c, rem) << endl;
	}
	return 0;
}
