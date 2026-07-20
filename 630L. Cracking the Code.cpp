#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	string s; cin >> s;
	string t;
	t.push_back(s[0]);
	t.push_back(s[2]);
	t.push_back(s[4]);
	t.push_back(s[3]);
	t.push_back(s[1]);
	ll x = stoll(t);
	ll mod = 100000, res = 1;
	for(ll i=0; i<5; i++) res = (res * x) % mod;
	cout << setw(5) << setfill('0') << res << endl;
	return 0;
}
