#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool ok(ll K, int n, vector<ll>& b, vector<vector<pair<int,ll>>>& adj){
	vector<ll> dp(n + 1, -1);
	dp[1] = 0;
	for(int v = 1; v <= n; v++){
		if(dp[v] < 0) continue;
		for(auto &e : adj[v]){
			int u = e.first;
			ll w = e.second;
			ll after = min(dp[v] + b[v], K);
			if(after >= w) dp[u] = max(dp[u], after);
		}
	}
	return dp[n] >= 0;
}

int main()
{
	fast;
	tc{
		int n, m; cin >> n >> m; vector<ll> b(n + 1);
		for(int i = 1; i <= n; i++) cin >> b[i];
		vector<vector<pair<int,ll>>> adj(n + 1);
		for(int i = 0; i < m; i++){
			int s, t; ll w; cin >> s >> t >> w;
			adj[s].push_back({t, w});
		}
		ll hi = 1e15;
		if(!ok(hi, n, b, adj)){
			cout << -1 << endl;
			continue;
		}
		ll lo = 0;
		while(lo < hi){
			ll mid = (lo + hi) / 2;
			if(ok(mid, n, b, adj)) hi = mid;
			else lo = mid + 1;
		}
		cout << lo << endl;
	}
	return 0;
}
