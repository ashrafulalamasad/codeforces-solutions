#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t; cin >> t; while(t--)
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){
	fast;
	tc{
		ll a, b, c; cin >> a >> b >> c;
		bool ok = 0;
		ll x = 2 * b - c;
		if(x > 0 && x % a == 0)ok = 1;
		x = a + c;
		if(x % 2 == 0){
			ll y = x / 2;
			if(y > 0 && y % b == 0)ok = 1;
		}
		x = 2 * b - a;
		if(x > 0 && x % c == 0)ok = 1;
		if(ok)cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
