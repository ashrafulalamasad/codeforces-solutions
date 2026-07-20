#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t; cin >> t; while(t--)
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int main()
{
	fast;
	tc{
		ll n; cin >> n;
		vector<string> g(n), w(n);
		for(ll i = 0; i < n; i++) cin >> g[i] >> w[i];
		vector<vector<ll>> adj(n, vector<ll>(n, 0));
		for(ll i = 0; i < n; i++){
			for(ll j = i + 1; j < n; j++){
				if(g[i] == g[j] || w[i] == w[j]){
					adj[i][j] = 1;
					adj[j][i] = 1;
				}
			}
		}
		ll N = 1LL << n;
		vector<vector<char>> dp(N, vector<char>(n, 0));
		for(ll i = 0; i < n; i++) dp[1LL << i][i] = 1;
		ll best = 1;
		for(ll mask = 1; mask < N; mask++){
			ll cnt = __builtin_popcount((unsigned)mask);
			for(ll i = 0; i < n; i++) if(dp[mask][i]){
				if(cnt > best) best = cnt;
				for(ll j = 0; j < n; j++) if(((mask >> j) & 1) == 0 && adj[i][j]){
					dp[mask | (1LL << j)][j] = 1;
				}
			}
		}
		cout << n - best << endl;
	}
	return 0;
}
