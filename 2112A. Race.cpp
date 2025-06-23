#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll a, x, y; cin >> a >> x >> y;
		bool ok = false;
		for(ll b = -200; b <= 200; b++){
			if(b == a) continue;
			if(abs(b - x) < abs(a - x) && abs(b - y) < abs(a - y)){
				ok = true;
				break;
			}
		}
		cout << (ok ? "YES" : "NO") << endl;
	}
	return 0;
}
