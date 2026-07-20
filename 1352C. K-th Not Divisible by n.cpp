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
		ll ans = k + (k-1)/(n-1);
		cout << ans << endl;
	}
	return 0;
}
