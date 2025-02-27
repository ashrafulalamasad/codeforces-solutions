#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll MOD = 998244353;

int main()
{
	fast;
	tc{
		ll n; cin >> n;
		vector<ll> parent(n + 1), depth(n + 1, 0);
		vector<vector<ll>> nodesAtDepth(n + 1);
		for(ll i = 2; i <= n; i++){
			cin >> parent[i];
			depth[i] = depth[parent[i]] + 1;
			nodesAtDepth[depth[i]].push_back(i);
		}
		vector<ll> dp(n + 1, 0);
		dp[1] = 1;
		ll prevLevelSum = 1;
		for(ll d = 1; d <= n; d++){
			if(nodesAtDepth[d].empty()) break;
			ll levelSum = 0;
			for(ll v : nodesAtDepth[d]){
				if(parent[v] == 1) dp[v] = prevLevelSum;
				else dp[v] = (prevLevelSum - dp[parent[v]] + MOD) % MOD;
				levelSum = (levelSum + dp[v]) % MOD;
			}
			prevLevelSum = levelSum;
		}
		ll ans = 0;
		for(ll i = 1; i <= n; i++) ans = (ans + dp[i]) % MOD;
		cout << ans << endl;
	}
	return 0;
}
