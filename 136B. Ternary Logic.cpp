#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
	fast;
	ll a, c; cin >> a >> c;
	ll b = 0, pw = 1;
	while(a > 0 || c > 0){
		ll x = a % 3, y = c % 3;
		ll z = (y - x + 3) % 3;
		b += z * pw;
		pw *= 3;
		a /= 3;
		c /= 3;
	}
	cout << b << endl;
	return 0;
}
