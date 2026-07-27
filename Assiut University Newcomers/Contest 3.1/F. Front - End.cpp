#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	ll n; cin >> n; vector<ll> a(n);
	for(ll i = 0; i < n; i++) cin >> a[i];
	ll l = 0, r = n - 1;
	bool first = true;
	while(l <= r){
		if(!first) cout << " ";
		cout << a[l++];
		first = false;
		if(l <= r) cout << " " << a[r--];
	}
	cout << endl;
	return 0;
}
