#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t; cin >> t; while(t--)
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool between(ll x, ll y, ll z){
	if(x < y) return x < z && z < y;
	return z > x || z < y;
}

int main()
{
	fast;
	tc{
		ll a, b, c, d; cin >> a >> b >> c >> d;
		bool ab = (between(a,b,c) != between(a,b,d));
		bool cd = (between(c,d,a) != between(c,d,b));
		if(ab && cd) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
    return 0;
}
