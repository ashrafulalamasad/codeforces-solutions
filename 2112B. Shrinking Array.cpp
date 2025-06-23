#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n; cin >> n; vector<ll>a(n);
		for(ll i = 0; i < n; i++) cin >> a[i];
		bool ok0 = false;
		for(ll i = 0; i + 1 < n; i++) if(abs(a[i] - a[i + 1]) <= 1) ok0 = true;
		if(ok0){
			cout << 0 << endl;
			continue;
		}
		bool ok1 = false;
		for(ll i = 0; i + 1 < n; i++){
			ll l = min(a[i], a[i + 1]), r = max(a[i], a[i + 1]);
			if(i - 1 >= 0){
				ll v = a[i - 1];
				if(v >= l - 1 && v <= r + 1) ok1 = true;
			}
			if(i + 2 < n){
				ll v = a[i + 2];
				if(v >= l - 1 && v <= r + 1) ok1 = true;
			}
		}
		cout << (ok1 ? 1 : -1) << endl;
	}
	return 0;
}
