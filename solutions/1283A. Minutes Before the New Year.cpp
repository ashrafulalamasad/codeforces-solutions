#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll h, m; cin >> h >> m;
		ll ans = 1440 - (h * 60 + m);
		cout << ans << endl;
	}
	return 0;
}
