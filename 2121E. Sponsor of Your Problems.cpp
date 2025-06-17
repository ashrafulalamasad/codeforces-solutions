#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		string l, r; cin >> l >> r; ll n = l.size();
		const ll INF = (ll)1e18;
		vector<vector<ll>>dp(2, vector<ll>(2, INF)), ndp(2, vector<ll>(2, INF));
		dp[1][1] = 0;
		for(ll i = 0; i < n; i++){
			for(ll a = 0; a < 2; a++) for(ll b = 0; b < 2; b++) ndp[a][b] = INF;
			for(ll tl = 0; tl < 2; tl++){
				for(ll th = 0; th < 2; th++){
					if(dp[tl][th] == INF) continue;
					ll lo = tl ? (l[i] - '0') : 0;
					ll hi = th ? (r[i] - '0') : 9;
					for(ll d = lo; d <= hi; d++){
						ll ntl = tl && (d == l[i] - '0');
						ll nth = th && (d == r[i] - '0');
						ll add = (d == l[i] - '0') + (d == r[i] - '0');
						ndp[ntl][nth] = min(ndp[ntl][nth], dp[tl][th] + add);
					}
				}
			}
			dp = ndp;
		}
		ll ans = INF;
		for(ll tl = 0; tl < 2; tl++) for(ll th = 0; th < 2; th++) ans = min(ans, dp[tl][th]);
		cout << ans << endl;
	}
	return 0;
}
