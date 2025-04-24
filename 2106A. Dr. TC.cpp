#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n; string s; cin >> n >> s;
		ll cnt = count(s.begin(), s.end(), '1');
		cout << cnt * (n - 1) + (n - cnt) << endl;
	}
	return 0;
}
