#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll calc(ll k, ll d, vector<ll> &pref){
	ll period = k + 1;
	ll q = min((ll)pref.size() - 1, period);
	ll full = d / period;
	ll rem = d % period;
	return full * pref[q] + pref[min(rem, q)];
}

int main(){
	fast;
	tc{
		ll n, c, d; cin >> n >> c >> d;
		vector<ll> a(n);
		for(ll i=0; i<n; i++) cin >> a[i];
		sort(a.rbegin(), a.rend());
		vector<ll> pref(n+1, 0);
		for(ll i=0; i<n; i++) pref[i+1] = pref[i] + a[i];
		if(pref[min(n, d)] >= c){
			cout << "Infinity\n";
			continue;
		}
		if(calc(0, d, pref) < c){
			cout << "Impossible\n";
			continue;
		}
		ll lo = 0, hi = d, ans = 0;
		while(lo <= hi){
			ll mid = (lo + hi) / 2;
			if(calc(mid, d, pref) >= c){
				ans = mid;
				lo = mid + 1;
			}else{
				hi = mid - 1;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
