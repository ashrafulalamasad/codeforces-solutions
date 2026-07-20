#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin >> t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n, k; string str; cin >> n >> k >> str; string s = " " + str;
		vector<vector<ll>> pref(n + 2, vector<ll>(k + 1, 0));
		vector<vector<ll>> suf(n + 2, vector<ll>(k + 1, 0));
		for(ll i = 1; i <= n; i++){
			vector<ll> best(k + 1, 0);
			ll z = 0;
			for(ll l = i; l >= 1; l--){
				if(s[l] == '0') z++;
				if(z > k) break;
				best[z] = max(best[z], i - l + 1);
			}
			for(ll c = 1; c <= k; c++) best[c] = max(best[c], best[c - 1]);
			for(ll c = 0; c <= k; c++) pref[i][c] = max(pref[i - 1][c], best[c]);
		}
		for(ll i = n; i >= 1; i--){
			vector<ll> best(k + 1, 0);
			ll z = 0;
			for(ll r = i; r <= n; r++){
				if(s[r] == '0') z++;
				if(z > k) break;
				best[z] = max(best[z], r - i + 1);
			}
			for(ll c = 1; c <= k; c++) best[c] = max(best[c], best[c - 1]);
			for(ll c = 0; c <= k; c++) suf[i][c] = max(suf[i + 1][c], best[c]);
		}
		vector<ll> ones(n + 1, 0);
		for(ll i = 1; i <= n; i++) ones[i] = ones[i - 1] + (s[i] == '1');
		vector<ll> mx(n + 1, -1);
		mx[0] = pref[n][k];
		for(ll l = 1; l <= n; l++){
			for(ll r = l; r <= n; r++){
				ll need = ones[r] - ones[l - 1];
				if(need > k) continue;
				ll rem = k - need;
				ll len0 = r - l + 1;
				ll len1 = max(pref[l - 1][rem], suf[r + 1][rem]);
				mx[len0] = max(mx[len0], len1);
			}
		}
		for(ll a = 1; a <= n; a++){
			ll ans = 0;
			for(ll len0 = 0; len0 <= n; len0++){
				if(mx[len0] == -1) continue;
				ans = max(ans, a * len0 + mx[len0]);
			}
			cout << ans << " ";
		}
		cout << endl;
	}
	return 0;
}
