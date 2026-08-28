#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n; cin >> n; vector<ll> a(n);
		for(ll i = 0; i < n; i++) cin >> a[i];
		ll maximumGroups = 1, target = 0;
		for(ll i = 0; i < n; i++){
			target += a[i];
			ll current = 0, groups = 0;
			bool possible = true;
			for(ll j = 0; j < n; j++){
				current += a[j];
				if(current > target){
					possible = false;
					break;
				}
				if(current == target){
					groups++;
					current = 0;
				}
			}
			if(possible && current == 0) maximumGroups = max(maximumGroups, groups);
		}
		cout << n - maximumGroups << endl;
	}
	return 0;
}
