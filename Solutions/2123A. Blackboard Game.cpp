#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n; cin >> n;
		if(n % 4 == 0) cout << "Bob" << endl;
		else cout << "Alice" << endl;
	}
	return 0;
}
