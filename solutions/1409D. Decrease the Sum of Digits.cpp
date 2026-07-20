#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll sum_dig(ll x){
	ll s = 0;
	while(x){
		s += x % 10;
		x /= 10;
	}
	return s;
}

int main()
{
	fast;
	tc{
		ll n, s; cin >> n >> s;
		if(sum_dig(n) <= s){
			cout << 0 << endl;
			continue;
		}
		ll ans = 0, p = 1;
		for(ll i=0; i<19; i++){
			ll dig = (n / p) % 10;
			if(dig == 0){
				p *= 10;
				continue;
			}
			ll add = (10 - dig) * p;
			n += add;
			ans += add;
			if(sum_dig(n) <= s) break;
			p *= 10;
		}
		cout << ans << endl;
	}
	return 0;
}
