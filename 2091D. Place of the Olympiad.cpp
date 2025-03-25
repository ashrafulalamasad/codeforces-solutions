#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n, m, k; cin >> n >> m >> k;
		ll x = (k + n - 1) / n;
		if(x <= (m + 1) / 2) cout << 1 << endl;
		else{
			ll den = m - x + 1;
			cout << (x + den - 1) / den << endl;
		}
	}
	return 0;
}
