#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n, m, a, b; cin >> n >> m >> a >> b;
		ll g1 = __gcd(n, a), g2 = __gcd(m, b);
		if(g1 == 1 && g2 == 1 && __gcd(n, m) <= 2) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
