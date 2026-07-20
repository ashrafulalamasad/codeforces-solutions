#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
	fast;
	ll n; cin >> n; vector<ll> a(n);
	for(ll i=0; i<n; i++) cin >> a[i];
	ll best_t = LLONG_MAX;
	ll best_idx = 0;
	for(ll i=0; i<n; i++){
		ll need = a[i] - i;
		ll k = 0;
		if(need > 0){
			k = (need + n - 1) / n;
		}else{
			k = 0;
		}
		ll t = k * n + i;
		if(t < best_t){
			best_t = t;
			best_idx = i;
		}
	}
	cout << best_idx + 1 << endl;
	return 0;
}
