#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin >> t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
	fast;
	tc{
		ll n; string s; cin >> n >> s;
		vector<ll> l(n + 1), r(n + 1);
		for(ll i = 1; i <= n; i++) cin >> l[i] >> r[i];
		vector<ll> st, ord; st.push_back(1);
		while(!st.empty()){
			ll u = st.back(); st.pop_back();
			ord.push_back(u);
			if(l[u]) st.push_back(l[u]);
			if(r[u]) st.push_back(r[u]);
		}
		vector<ll> dp(n + 1, 0);
		for(ll i = (ll)ord.size() - 1; i >= 0; i--){
			ll u = ord[i];
			if(l[u] == 0 && r[u] == 0){
				dp[u] = 0;
				continue;
			}
			ll best = (ll)4e18;
			if(l[u]) best = min(best, dp[l[u]] + (s[u - 1] == 'L' ? 0 : 1));
			if(r[u]) best = min(best, dp[r[u]] + (s[u - 1] == 'R' ? 0 : 1));
			dp[u] = best;
		}
		cout << dp[1] << endl;
	}
	return 0;
}
