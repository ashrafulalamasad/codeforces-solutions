#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
	fast;
	ll n; cin >> n; vector<ll> a(2*n);
	for(ll i=0; i<2*n; i++) cin >> a[i];
	ll ans = 0;
	for(ll i=0; i<2*n; i+=2){
		if(a[i] == a[i+1]) continue;
		ll j = i+1;
		while(j < 2*n && a[j] != a[i]) j++;
		while(j > i+1){
			swap(a[j], a[j-1]);
			j--;
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
