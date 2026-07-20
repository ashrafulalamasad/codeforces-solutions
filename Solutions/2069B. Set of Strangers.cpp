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
		vector<vector<ll>> g(n, vector<ll>(m));
		ll mx = 0;
		for(ll i = 0; i < n; i++)
			for(ll j = 0; j < m; j++){
				cin >> g[i][j];
				mx = max(mx, g[i][j]);
			}
		vector<char> cost(mx + 1, 0);
		vector<bool> used(mx + 1, false);
		for(ll i = 0; i < n; i++)
			for(ll j = 0; j < m; j++){
				ll c = g[i][j];
				used[c] = true;
				cost[c] = 1;
			}
		for(ll i = 0; i < n; i++)
			for(ll j = 0; j < m; j++){
				ll c = g[i][j];
				if((j + 1 < m && g[i][j + 1] == c) || (i + 1 < n && g[i + 1][j] == c))
					cost[c] = 2;
			}
		ll tot = 0, best = 0;
		for(ll c = 1; c <= mx; c++)
			if(used[c]){
				tot += cost[c];
				best = max(best, (ll)cost[c]);
			}
		cout << tot - best << endl;
	}
	return 0;
}
