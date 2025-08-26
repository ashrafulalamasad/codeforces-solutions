#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n, k; cin >> n >> k; vector<ll> a(n);
		for(ll i = 0; i < n; i++) cin >> a[i];
		ll m = k + 1, p = 0;
		for(ll d = 2; d * d <= m; d++){
			if(m % d == 0){ p = d; break; }
		}
		if(!p) p = m;
		for(ll i = 0; i < n; i++) a[i] += (a[i] % p) * k;
		for(ll i = 0; i < n; i++){
			if(i) cout << " ";
			cout << a[i];
		}
		cout << endl;
	}
	return 0;
}
