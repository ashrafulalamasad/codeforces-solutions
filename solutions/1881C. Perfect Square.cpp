#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n; cin >> n; vector<string> a(n);
		for(ll i=0; i<n; i++) cin >> a[i];
		ll ans = 0;
		for(ll i=0; i<n/2; i++){
			for(ll j=0; j<n/2; j++){
				char c1 = a[i][j];
				char c2 = a[j][n-1-i];
				char c3 = a[n-1-i][n-1-j];
				char c4 = a[n-1-j][i];
				char mx = max(max(c1, c2), max(c3, c4));
				ans += (mx - c1) + (mx - c2) + (mx - c3) + (mx - c4);
			}
		}
		cout << ans << endl;
	}
	return 0;
}
