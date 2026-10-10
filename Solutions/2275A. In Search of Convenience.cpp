#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll x0, y0, r; cin >> x0 >> y0 >> r;
		for(ll x = -r; x <= r; x++){
			for(ll y = -r; y <= r; y++){
				if(x * x + y * y == r * r){
					cout << x0 + x << " " << y0 + y << endl;
					x = r + 1;
					break;
				}
			}
		}
	}
	return 0;
}
