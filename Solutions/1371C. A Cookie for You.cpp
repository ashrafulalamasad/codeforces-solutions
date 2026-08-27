#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll a, b, n, m; cin >> a >> b >> n >> m;
		if(a + b < n + m || min(a, b) < m) cout << "No" << endl;
		else cout << "Yes" << endl;
	}
	return 0;
}
