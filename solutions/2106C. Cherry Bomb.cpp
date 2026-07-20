#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n, k; cin >> n >> k;
		vector<ll> a(n), b(n);
		for(ll i = 0; i < n; i++) cin >> a[i];
		bool fixed = false, invalid = false;
		ll S = 0;
		for(ll i = 0; i < n; i++){
			cin >> b[i];
			if(b[i] >= 0){
				ll s = a[i] + b[i];
				if(!fixed){ S = s; fixed = true; }
				else if(S != s) invalid = true;
			}
		}
		if(invalid){ cout << 0 << endl; continue; }
		if(fixed){
			for(ll i = 0; i < n; i++)
				if(b[i] < 0 && (S - a[i] < 0 || S - a[i] > k)) invalid = true;
			cout << (invalid ? 0 : 1) << endl;
		}else{
			ll L = *max_element(a.begin(), a.end());
			ll R = k + *min_element(a.begin(), a.end());
			cout << max(0LL, R - L + 1) << endl;
		}
	}
	return 0;
}
