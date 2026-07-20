#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n, m; cin >> n >> m;
		vector<vector<ll>>a(n, vector<ll>(m));
		vector<ll>d1(n + m + 5, 0), d2(n + m + 5, 0);
		for(ll i = 0; i < n; i++){
			for(ll j = 0; j < m; j++){
				cin >> a[i][j];
				d1[i - j + m] += a[i][j];
				d2[i + j] += a[i][j];
			}
		}
		ll ans = 0;
		for(ll i = 0; i < n; i++){
			for(ll j = 0; j < m; j++){
				ans = max(ans, d1[i - j + m] + d2[i + j] - a[i][j]);
			}
		}
		cout << ans << endl;
	}
	return 0;
}
