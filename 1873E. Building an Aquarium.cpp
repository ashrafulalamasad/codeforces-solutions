#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin >> t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
	fast;
	tc{
		ll n, x; cin >> n >> x; vector<ll> a(n);
		for(ll i = 0; i < n; i++) cin >> a[i];
		ll l = 1, r = (ll)2e9 + 5, ans = 1;
		while(l <= r){
			ll m = (l + r) / 2, need = 0;
			for(ll i = 0; i < n; i++){
				if(a[i] < m) need += m - a[i];
				if(need > x) break;
			}
			if(need <= x) ans = m, l = m + 1;
			else r = m - 1;
		}
		cout << ans << endl;
	}
	return 0;
}
