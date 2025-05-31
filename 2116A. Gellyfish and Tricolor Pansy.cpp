#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll a, b, c, d; cin >> a >> b >> c >> d;
		if(b <= a && b <= c) cout << "Gellyfish" << endl;
		else if(a < d) cout << "Flower" << endl;
		else if(d <= c) cout << "Gellyfish" << endl;
		else cout << "Flower" << endl;
	}
	return 0;
}
