#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
	fast;
	tc{
		ll n; cin >> n;
		ll mn = 1e18,mx = -1e18;
		for(ll i = 0; i < n; i++){
			ll x; cin >> x;
			mn = min(mn,x);
			mx = max(mx,x);
		}
		cout << mx-mn << endl;
	}
	return 0;
}
