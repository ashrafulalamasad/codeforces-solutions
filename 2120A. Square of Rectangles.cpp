#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool can(ll l1, ll b1, ll l2, ll b2, ll l3, ll b3){
	ll side = max({l1, l2, l3, b1, b2, b3});
	if((l1 == side && l2 == side && l3 == side && b1 + b2 + b3 == side) ||
		(b1 == side && b2 == side && b3 == side && l1 + l2 + l3 == side))
		return true;
	if(l1 == side && b1 < side)
		if(l2 + l3 == side && b2 == b3 && b1 + b2 == side && l2 <= side && l3 <= side)
			return true;
	if(b1 == side && l1 < side)
		if(b2 + b3 == side && l2 == l3 && l1 + l2 == side && b2 <= side && b3 <= side)
			return true;
	return false;
}

int main()
{
	fast;
	tc{
		ll l1, b1, l2, b2, l3, b3;
		cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;
		cout << (can(l1, b1, l2, b2, l3, b3) ? "YES" : "NO") << endl;
	}
	return 0;
}
