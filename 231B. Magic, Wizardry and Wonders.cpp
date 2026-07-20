#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	ll n, d, l; cin >> n >> d >> l;
	ll plus = (n + 1) / 2;
	ll minus = n / 2;
	ll min_d = plus * 1 - minus * l;
	ll max_d = plus * l - minus * 1;
	if(d < min_d || d > max_d){
		cout << "-1" << endl;
		return 0;
	}
	vector<ll> a(n);
	for(ll i=0; i<n; i++){
		if(i % 2 == 0) a[i] = 1;
		else a[i] = l;
	}
	ll curr = min_d;
	ll need = d - curr;
	for(ll i=0; i<n && need>0; i++){
		if(i % 2 == 0){
			ll can = min(need, l - 1);
			a[i] += can;
			need -= can;
		} else {
			ll can = min(need, l - 1);
			a[i] -= can;
			need -= can;
		}
	}
	for(ll i=0; i<n; i++){
		if(i) cout << " ";
		cout << a[i];
	}
	cout << endl;
	return 0;
}
