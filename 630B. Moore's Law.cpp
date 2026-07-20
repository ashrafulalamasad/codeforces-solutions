#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	ll n, t; cin >> n >> t;
	long double base = 1.000000011L;
	long double ans = (long double)n * expl((long double)t * logl(base));
	cout << fixed << setprecision(18) << ans << endl;
	return 0;
}
