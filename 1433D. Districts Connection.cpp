#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin >> t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
	fast;
	tc{
		ll n; cin >> n; vector<ll> a(n);
		for(ll i = 0; i < n; i++) cin >> a[i];
		ll first = 0, other = -1;
		for(ll i = 1; i < n; i++){
			if(a[i] != a[first]){
				other = i;
				break;
			}
		}
		if(other == -1){
			cout << "NO" << endl;
			continue;
		}
		cout << "YES" << endl;
		for(ll i = 1; i < n; i++){
			if(a[i] != a[first]) cout << first + 1 << " " << i + 1 << endl;
		}
		for(ll i = 1; i < n; i++){
			if(a[i] == a[first]) cout << other + 1 << " " << i + 1 << endl;
		}
	}
	return 0;
}
