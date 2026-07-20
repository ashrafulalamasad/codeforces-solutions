#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n, k; cin >> n >> k; vector<ll> a(n);
		for(ll i = 0; i < n; i++) cin >> a[i];
		map<ll,ll> mp;
		for(ll x : a) mp[x]++;
		ll ans = 0;
		for(auto &p : mp){
			ll x = p.first, cnt = p.second;
			if(x > k) continue;
			ll y = k - x;
			if(mp.count(y)){
				if(x == y) ans += cnt / 2;
				else{
					ll take = min(cnt, mp[y]);
					ans += take;
					mp[x] -= take;
					mp[y] -= take;
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}
