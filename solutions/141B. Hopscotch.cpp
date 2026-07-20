#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll a, x, y; cin >> a >> x >> y;
	if(y % a == 0){ cout << -1 << endl; return 0; }
	ll row = y / a + 1, before = 0;
	if(row == 1) before = 0;
	else if(row == 2) before = 1;
	else{
		ll m = row - 3;
		ll pairs = m / 2;
		ll rem = m % 2;
		before = 2 + pairs * 3 + rem * 2;
	}
	ll two_x = 2 * x;
	if(row == 1 || row == 2 || (row >= 3 && row % 2 == 0)){
		if(llabs(two_x) < a) cout << before + 1 << endl;
		else cout << -1 << endl;
		return 0;
	}
	if(two_x > -2LL * a && two_x < 0){
		cout << before + 1 << endl;
	}else if(two_x > 0 && two_x < 2LL * a){
		cout << before + 2 << endl;
	}else{
		cout << -1 << endl;
	}
    return 0;
}
