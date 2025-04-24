#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n, x; cin >> n >> x;
		vector<ll> p(n);
		if(x == n) iota(p.begin(), p.end(), 0);
		else{
			for(ll i = 0; i < x; i++) p[i] = i;
			for(ll i = n - 1; i >= x; i--) p[n - 1 - i + x] = i;
		}
		for(ll i = 0; i < n; i++) cout << p[i] << " \n"[i == n - 1];
	}
	return 0;
}
