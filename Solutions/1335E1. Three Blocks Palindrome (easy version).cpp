#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n; cin >> n; vector<ll> a(n);
		for(ll i=0; i<n; i++) cin >> a[i];
		vector<vector<ll>> pos(27);
		for(ll i=0; i<n; i++) pos[a[i]].push_back(i+1);
		vector<vector<ll>> pref(27, vector<ll>(n+1, 0));
		for(ll v=1; v<=26; v++){
			for(ll i=1; i<=n; i++){
				pref[v][i] = pref[v][i-1] + (a[i-1] == v);
			}
		}
		ll ans = 0;
		for(ll v=1; v<=26; v++) ans = max(ans, pref[v][n]);
		for(ll v=1; v<=26; v++){
			ll m = pos[v].size();
			for(ll k=1; 2*k <= m; k++){
				ll l = pos[v][k-1] + 1;
				ll r = pos[v][m-k] - 1;
				if(l>r){
					ans = max(ans, 2*k);
					continue;
				}
				ll mx = 0;
				for(ll u=1; u<=26; u++){
					mx = max(mx, pref[u][r] - pref[u][l-1]);
				}
				ans = max(ans, 2*k + mx);
			}
		}
		cout << ans << endl;
	}
	return 0;
}
