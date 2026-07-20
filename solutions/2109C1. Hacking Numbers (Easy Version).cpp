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
		string r;
		cout << "mul 9\n" << flush;
		cin >> r;
		cout << "digit\n" << flush;
		cin >> r;
		cout << "digit\n" << flush;
		cin >> r;
		cout << "add " << (n - 9) << "\n" << flush;
		cin >> r;
		cout << "!\n" << flush;
		cin >> r;
	}
	return 0;
}
