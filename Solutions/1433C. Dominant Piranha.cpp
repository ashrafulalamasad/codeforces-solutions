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
		ll maxVal = *max_element(a.begin(), a.end());
		ll ans = -1;
		for(ll i = 0; i < n; i++){
			if(a[i] == maxVal){
				if((i > 0 && a[i-1] < maxVal) || (i < n-1 && a[i+1] < maxVal)){
					ans = i + 1;
					break;
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}
