#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll k; cin >> k;
		cout << (k % 3 == 1 ? "YES" : "NO") << endl;
	}
	return 0;
}
