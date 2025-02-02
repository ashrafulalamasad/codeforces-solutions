#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n, s1, s2; cin >> n >> s1 >> s2;
		vector<vector<ll>> g1(n + 1), g2(n + 1);
		ll e1; cin >> e1;
		for(ll i = 0; i < e1; i++){
			ll u, v; cin >> u >> v;
			g1[u].push_back(v);
			g1[v].push_back(u);
		}
		ll e2; cin >> e2;
		for(ll i = 0; i < e2; i++){
			ll u, v; cin >> u >> v;
			g2[u].push_back(v);
			g2[v].push_back(u);
		}
		vector<bool> safe(n + 1, false);
		for(ll i = 1; i <= n; i++){
			for(ll nb1 : g1[i]){
				for(ll nb2 : g2[i]){
					if(nb1 == nb2){
						safe[i] = true;
						break;
					}
				}
				if(safe[i]) break;
			}
		}
		priority_queue<tuple<ll, ll, ll, ll>, vector<tuple<ll, ll, ll, ll>>, greater<tuple<ll, ll, ll, ll>>> pq;
		pq.push({0, s1, s2, 0});
		vector<vector<ll>> dist(n + 1, vector<ll>(n + 1, INT_MAX));
		dist[s1][s2] = 0;
		ll ans = -1;
		while(!pq.empty()){
			ll cost = get<0>(pq.top());
			ll u1 = get<1>(pq.top());
			ll u2 = get<2>(pq.top());
			ll steps = get<3>(pq.top());
			pq.pop();
			if(safe[u1] && u1 == u2){
				ans = cost;
				break;
			}
			if(steps > n * n) break;
			for(ll v1 : g1[u1]){
				for(ll v2 : g2[u2]){
					ll nc = cost + abs(v1 - v2);
					if(nc < dist[v1][v2]){
						dist[v1][v2] = nc;
						pq.push({nc, v1, v2, steps + 1});
					}
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}
