#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	ll n, k; cin >> n >> k; vector<ll> a(n);
	for(ll i = 0; i < n; i++) cin >> a[i];
	sort(a.begin(), a.end(), greater<ll>());
	ll ans = 0;
	for(ll i = 0; i < k; i++){
		if(a[i] > 0) ans += a[i];
		else break;
	}
	cout << ans << endl;
	return 0;
}
