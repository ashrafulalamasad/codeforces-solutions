#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
	fast;
	ll n, p; cin >> n >> p;
	string s; cin >> s;
	if(p > n/2) p = n - p + 1;
	ll l = (ll)1e18, r = -1;
	ll ans = 0;
	for(ll i=1; i<=n/2; i++){
		ll d = abs(s[i-1] - s[n-i]);
		ans += min(d, 26 - d);
		if(s[i-1] != s[n-i]){
			l = min(l, i);
			r = max(r, i);
		}
	}
	if(r == -1){
		cout << 0 << endl;
		return 0;
	}
	ans += min(abs(p - l), abs(p - r)) + (r - l);
	cout << ans << endl;
	return 0;
}
