#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n, k; cin >> n >> k;
		ll q = n / k;
		ll r = n % k;
		ll ans = q * k + min(r, k / 2);
		cout << ans << endl;
	}
	return 0;
}
