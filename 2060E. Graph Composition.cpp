#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n, m1, m2; cin >> n >> m1 >> m2;
		vector<ll> g1[n], g2[n];
		for(ll i = 0; i < m1; i++){
			ll u, v; cin >> u >> v; u--; v--;
			g1[u].push_back(v); g1[v].push_back(u);
		}
		for(ll i = 0; i < m2; i++){
			ll u, v; cin >> u >> v; u--; v--;
			g2[u].push_back(v); g2[v].push_back(u);
		}
		vector<ll> comp(n, -1);
		ll c2 = 0;
		function<void(ll)> dfs2 = [&](ll u){
			comp[u] = c2;
			for(ll v : g2[u]) if(comp[v] == -1) dfs2(v);
		};
		for(ll i = 0; i < n; i++) if(comp[i] == -1){ c2++; dfs2(i); }
		vector<vector<ll>> adj(n);
		ll ans = 0;
		for(ll u = 0; u < n; u++){
			for(ll v : g1[u]){
				if(comp[u] != comp[v]) ans++;
				else adj[u].push_back(v);
			}
		}
		ans /= 2;
		vector<ll> vis(n, 0);
		ll c1 = 0;
		function<void(ll)> dfs1 = [&](ll u){
			vis[u] = 1;
			for(ll v : adj[u]) if(!vis[v]) dfs1(v);
		};
		for(ll i = 0; i < n; i++) if(!vis[i]){ c1++; dfs1(i); }
		cout << ans + (c1 - c2) << endl;
	}
	return 0;
}
