#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
	fast;
	tc{
		ll n; cin >> n; vector<ll>a(n);
		for(ll i = 0; i < n; i++) cin >> a[i];
		ll l = 0, r = 1000000000;
		for(ll i = 0; i + 1 < n; i++){
			if(a[i] < a[i+1]){
				r = min(r, (a[i]+a[i+1])/2);
			}else if(a[i] > a[i+1]){
				l = max(l, (a[i]+a[i+1]+1)/2);
			}
		}
		if(l <= r)cout << l << endl;
		else cout << -1 << endl;
	}
	return 0;
}
