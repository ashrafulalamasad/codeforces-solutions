#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n; cin >> n;
		vector<ll> d(n + 1), l(n + 1), r(n + 1);
		for(ll i = 1; i <= n; i++) cin >> d[i];
		for(ll i = 1; i <= n; i++) cin >> l[i] >> r[i];
		vector<ll> L(n + 1), R(n + 1);
		L[0] = R[0] = 0;
		bool ok = true;
		for(ll i = 1; i <= n; i++){
			ll lo, hi;
			if(d[i] == 0){ lo = L[i - 1]; hi = R[i - 1]; }
			else if(d[i] == 1){ lo = L[i - 1] + 1; hi = R[i - 1] + 1; }
			else{ lo = L[i - 1]; hi = R[i - 1] + 1; }
			L[i] = max(lo, l[i]);
			R[i] = min(hi, r[i]);
			if(L[i] > R[i]){ ok = false; break; }
		}
		if(!ok){ cout << -1 << endl; continue; }
		vector<ll> ans(n + 1), h(n + 1);
		h[n] = L[n];
		for(ll i = n; i >= 1; i--){
			if((d[i] == -1 || d[i] == 0) && h[i] >= L[i - 1] && h[i] <= R[i - 1]){
				ans[i] = 0;
				h[i - 1] = h[i];
			} else {
				ans[i] = 1;
				h[i - 1] = h[i] - 1;
			}
		}
		for(ll i = 1; i <= n; i++) cout << ans[i] << " \n"[i == n];
	}
	return 0;
}
