#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin >> t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll x; cin >> x;
		string s = to_string(x);
		ll digit = s[0] - '0';
		ll count = (ll)s.length();
		ll total = 0;
		total += (digit - 1) * 10;
		total += count * (count + 1) / 2;
		cout << total << endl;
	}
	return 0;
}
