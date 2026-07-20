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
		ll first = -1, last = -1;
		for(ll i = 0; i < n; i++){
			if(a[i] == 1){
				if(first == -1) first = i;
				last = i;
			}
		}
		ll ans = 0;
		for(ll i = first; i <= last; i++){
			if(a[i] == 0) ans++;
		}
		cout << ans << endl;
	}
	return 0;
}
