#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n, m, ans = 0; cin >> n >> m; vector<ll> a(n), b(m);
		for(ll i = 0; i < n; i++) cin >> a[i];
		for(ll i = 0; i < m; i++) cin >> b[i];
		sort(a.begin(), a.end()); sort(b.begin(), b.end());
		ll l = 0, r = n-1, x = 0, y = m-1;
		for(ll k = 0; k < n; k++){
			if(abs(a[l] - b[y]) >= abs(a[r] - b[x])){
				ans += abs(a[l] - b[y]);
				l++; y--;
			}else{
				ans += abs(a[r] - b[x]);
				r--; x++;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
