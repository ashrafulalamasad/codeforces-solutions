#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll x, y; cin >> x >> y;
		ll sum = x + y, submask = 0;
		bool smaller = false;
		for(ll bit = 30; bit >= 0; bit--){
			ll value = 1LL << bit;
			if(sum & value){
				if(smaller || (x & value)) submask |= value;
			}else if(x & value){
				smaller = true;
			}
		}
		cout << sum << ' ' << x - submask << endl;
	}
	return 0;
}
