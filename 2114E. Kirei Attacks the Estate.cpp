#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n; cin >> n; vector<ll> a(n + 1);
		for(ll i = 1; i <= n; i++) cin >> a[i];
		vector<vector<ll>> g(n + 1);
		for(ll i = 1; i < n; i++){
			ll u, v; cin >> u >> v;
			g[u].push_back(v);
			g[v].push_back(u);
		}
		vector<ll> threat(n + 1), mn(n + 1);
		vector<ll> st = {1}, parent(n + 1, 0);
		parent[1] = -1;
		while(!st.empty()){
			ll v = st.back(); st.pop_back();
			if(v > 0){
				if(parent[v] == -1){
					threat[v] = a[v];
					mn[v] = min(0LL, a[v]);
				}else{
					ll p = parent[v];
					threat[v] = a[v] - mn[p];
					mn[v] = min({0LL, a[v], a[v] - threat[p]});
				}
				st.push_back(-v);
				for(ll to : g[v]) if(to != parent[v]){
					parent[to] = v;
					st.push_back(to);
				}
			}
		}
		for(ll i = 1; i <= n; i++) cout << threat[i] << " ";
		cout << endl;
	}
	return 0;
}
