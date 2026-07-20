#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	ll n, k, t; cin >> n >> k >> t;
	ll filled = n * k * t / 100;
	for(ll i=0; i<n; i++){
		if(filled >= k){
			cout << k;
			filled -= k;
		}else{
			cout << filled;
			filled = 0;
		}
		if(i+1 < n) cout << " ";
	}
	cout << endl;
	return 0;
}
