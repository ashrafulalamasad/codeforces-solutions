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
		for(ll i=0; i<n; i++) cin >> a[i];
		ll ans = 0;
		for(ll i=0; i<n; i++){
			for(ll j=i+1; j<n; j++){
				ans = max(ans, (a[i] ^ a[j]));
			}
		}
		cout << ans << endl;
	}
	return 0;
}
