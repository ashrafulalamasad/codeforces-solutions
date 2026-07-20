#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin >> t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n; cin >> n; ll m = n / 2;
		if(m % 2){
			cout << "NO" << endl;
			continue;
		}
		cout << "YES" << endl;
		vector<ll> a;
		ll sumEven = 0, sumOdd = 0;
		for(ll i = 1; i <= m; i++){
			ll val = 2 * i;
			a.push_back(val);
			sumEven += val;
		}
		for(ll i = 1; i < m; i++){
			ll val = 2 * i - 1;
			a.push_back(val);
			sumOdd += val;
		}
		a.push_back(sumEven - sumOdd);
		for(ll i = 0; i < n; i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
