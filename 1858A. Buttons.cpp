#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin >> t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll a, b, c; cin >> a >> b >> c;
		ll anna = a + (c + 1) / 2;
		ll katie = b + c / 2;
		if(anna > katie) cout << "First" << endl;
		else cout << "Second" << endl;
	}
	return 0;
}
