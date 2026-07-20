#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n; cin >> n;
		ll m = (n - 1) / 2;
		long long ans = 4LL * m * (m + 1) * (2 * m + 1) / 3;
		cout << ans << endl;
	}
	return 0;
}
