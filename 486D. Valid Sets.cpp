#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll mod = 1000000007;

int main(){
	fast;
	ll d, n; cin >> d >> n;
	vector<ll> a(n+1);
	for(ll i=1; i<=n; i++) cin >> a[i];
	vector<vector<ll>> g(n+1);
	for(ll i=1; i<n; i++){
		ll u, v; cin >> u >> v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	ll ans = 0;
	for(ll root=1; root<=n; root++){
		auto ok = [&](ll u)->bool{
			if(a[u] < a[root] || a[u] > a[root] + d) return 0;
			if(a[u] == a[root] && u < root) return 0;
			return 1;
		};
		function<ll(ll,ll)> dfs = [&](ll u, ll p)->ll{
			ll ways = 1;
			for(ll v : g[u]){
				if(v == p) continue;
				if(!ok(v)) continue;
				ll child = dfs(v, u);
				ways = (ways * (child + 1)) % mod;
			}
			return ways;
		};
		ans = (ans + dfs(root, 0)) % mod;
	}
	cout << ans << endl;
	return 0;
}
