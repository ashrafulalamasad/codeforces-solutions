#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n, sum = 0; cin >> n; vector<ll> a(n);
		bool zero = false;
		for(ll i = 0; i < n; i++){
			cin >> a[i];
			sum += a[i];
			if(i > 0 && a[i] == 0 && a[i - 1] == 0) zero = true;
		}
		cout << (zero || sum == n ? "YES" : "NO") << endl;
	}
	return 0;
}
