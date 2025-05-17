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
		cout << "mul 9" << endl; cout.flush();
		string res; cin >> res;
		if(res == "-1") return 0;

		cout << "digit" << endl; cout.flush();
		cin >> res;
		if(res == "-1") return 0;

		cout << "digit" << endl; cout.flush();
		cin >> res;
		if(res == "-1") return 0;

		cout << "add " << n - 9 << endl; cout.flush();
		cin >> res;
		if(res == "-1") return 0;

		cout << "!" << endl; cout.flush();
		cin >> res;
	}
	return 0;
}
