#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		string s; cin >> s;
		ll y = stoll(s);
		bool ok = false;
		for(ll a = 0; a < 100 && !ok; a++)
			for(ll b = 0; b < 100; b++)
				if((a + b) * (a + b) == y){
					cout << a << " " << b << endl;
					ok = true;
					break;
				}
		if(!ok) cout << -1 << endl;
	}
	return 0;
}
