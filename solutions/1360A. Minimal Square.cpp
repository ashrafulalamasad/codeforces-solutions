#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll a, b; cin >> a >> b;
		ll s = max(max(a, b), 2 * min(a, b));
		cout << s * s << endl;
	}
	return 0;
}
