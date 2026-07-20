#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin >> t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
	fast;
	const ll mask = (1LL << 31) - 1;
	tc{
		ll n; cin >> n;
		unordered_map<ll, ll> cnt;
		cnt.reserve((size_t)(2 * n + 10));
		cnt.max_load_factor(0.7);
		vector<ll> a(n);
		for(ll i = 0; i < n; i++){
			cin >> a[i];
		}
		ll ans = 0;
		for(ll i = 0; i < n; i++){
			ll x = a[i], y = x ^ mask;
			if(cnt[y] > 0){
				cnt[y]--;
			}
			else{
				cnt[x]++;
				ans++;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
