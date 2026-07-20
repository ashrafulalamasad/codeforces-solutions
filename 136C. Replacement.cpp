#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
	fast;
	ll n; cin >> n; vector<ll> a(n);
	for(ll i=0; i<n; i++) cin >> a[i];
	sort(a.begin(), a.end());
	if(a[0] == 1 && a[n-1] == 1){
		for(ll i=0; i<n; i++){
			if(i) cout << " ";
			if(i == n-1) cout << 2;
			else cout << 1;
		}
		cout << endl;
		return 0;
	}
	for(ll i=0; i<n; i++){
		if(i) cout << " ";
		if(i == 0) cout << 1;
		else cout << a[i-1];
	}
	cout << endl;
	return 0;
}
