#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	ll n, t, c; cin >> n >> t >> c; vector<ll> a(n);
	for(ll i=0; i<n; i++) cin >> a[i];
	ll consec = 0, ans = 0;
	for(ll i=0; i<n; i++){
		if(a[i] <= t) consec++; else {
			if(consec >= c) ans += consec - c + 1;
			consec = 0;
		}
	}
	if(consec >= c) ans += consec - c + 1;
	cout << ans << endl;
	return 0;
}
