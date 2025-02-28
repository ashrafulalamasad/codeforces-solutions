#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n, st, en; cin >> n >> st >> en;
		vector<vector<ll>> adj(n + 1);
		for(ll i = 1; i < n; i++){
			ll u, v; cin >> u >> v;
			adj[u].push_back(v); adj[v].push_back(u);
		}
		vector<ll> dist(n + 1, -1);
		queue<ll> q;
		dist[en] = 0;
		q.push(en);
		while(!q.empty()){
			ll u = q.front(); q.pop();
			for(ll v : adj[u])
				if(dist[v] == -1){
					dist[v] = dist[u] + 1;
					q.push(v);
				}
		}
		vector<ll> perm(n);
		iota(perm.begin(), perm.end(), 1);
		sort(perm.begin(), perm.end(), [&](ll a, ll b){
			return dist[a] > dist[b];
		});
		for(ll x : perm) cout << x << " ";
		cout << endl;
	}
	return 0;
}
