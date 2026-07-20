#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin >> t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n, k; string s; cin >> n >> k >> s; vector<ll> occ;
		for(ll i = 0; i < n; i++){
			if(s[i] == '1') occ.push_back(i);
		}
		ll ans = 0;
		if(occ.empty()){
			ans = (n - 1) / (k + 1) + 1;
		}else{
			ll first = occ[0];
			if(first - k - 1 >= 0){
				ans += (first - k - 1) / (k + 1) + 1;
			}
			for(ll i = 0; i + 1 < (ll)occ.size(); i++){
				ll left = occ[i] + k + 1;
				ll right = occ[i + 1] - k - 1;
				if(left <= right){
					ans += (right - left) / (k + 1) + 1;
				}
			}
			ll last = occ.back();
			ll left = last + k + 1;
			if(left < n){
				ans += (n - 1 - left) / (k + 1) + 1;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
