#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin >> t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool check(ll x, ll s, vector<ll>& v, ll k){
	ll c = 0;
	for(ll i = 0; i < (ll)v.size(); i++){
		if(s){
			if(v[i] <= x){
				c++;
				s ^= 1;
			}
		}else{
			c++;
			s ^= 1;
		}
	}
	return c >= k;
}

int main()
{
	fast;
	ll n, k; cin >> n >> k; vector<ll> v(n);
	for(ll i = 0; i < n; i++) cin >> v[i];
	ll l = 0, r = (ll)1e9, ans = 0;
	while(l <= r){
		ll m = (l + r) / 2;
		if(check(m, 0, v, k) || check(m, 1, v, k)){
			ans = m;
			r = m - 1;
		}
		else l = m + 1;
	}
	cout << ans << endl;
	return 0;
}
