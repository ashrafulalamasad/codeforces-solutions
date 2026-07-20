#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n, k; cin >> n >> k; vector<ll> a(n), b(n);
		for(ll i=0; i<n; i++) cin >> a[i];
		for(ll i=0; i<n; i++) cin >> b[i];
		sort(a.begin(), a.end());
		sort(b.begin(), b.end(), greater<ll>());
		for(ll i=0; i<n && i<k; i++){
			if(a[i] < b[i]) swap(a[i], b[i]);
			else break;
		}
		ll sum = 0;
		for(ll i=0; i<n; i++) sum += a[i];
		cout << sum << endl;
	}
	return 0;
}
