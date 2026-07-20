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
		vector<string> a(n);
		for(ll i=0; i<n; i++) cin >> a[i];
		ll ans = 0;
		for(ll i=0; i<n; i++){
			for(ll j=0; j<n; j++){
				ll cnt = 0;
				cnt += (a[i][j] == '1');
				cnt += (a[j][n-1-i] == '1');
				cnt += (a[n-1-i][n-1-j] == '1');
				cnt += (a[n-1-j][i] == '1');
				ans += min(cnt, 4-cnt);
			}
		}
		cout << ans/4 << endl;
	}
	return 0;
}
