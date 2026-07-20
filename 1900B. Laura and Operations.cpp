#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin >> t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
	fast;
	tc{
		ll a, b, c; cin >> a >> b >> c;
		cout << ((b + c) % 2 == 0) << " " << ((a + c) % 2 == 0) << " " << ((a + b) % 2 == 0) << endl;
	}
	return 0;
}
