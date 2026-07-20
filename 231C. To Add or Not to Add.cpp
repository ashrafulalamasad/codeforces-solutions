#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	ll n, k; if(!(cin >> n >> k)) return 0;
	vector<ll> a(n);
	for(ll i=0; i<n; i++) cin >> a[i];
	sort(a.begin(), a.end());
	ll l = 0, bestLen = 1, ans = a[0], sum = 0;
	for(ll r=0; r<n; r++){
		sum += a[r];
		while(a[r] * (r - l + 1) - sum > k){
			sum -= a[l];
			l++;
		}
		ll len = r - l + 1;
		if(len > bestLen || (len == bestLen && a[r] < ans)){
			bestLen = len;
			ans = a[r];
		}
	}
	cout << bestLen << " " << ans << endl;
	return 0;
}
