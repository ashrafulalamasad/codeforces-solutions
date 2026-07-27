#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	string s; cin >> s;
	vector<string> key = {"username", "pwd", "profile", "role", "key"};
	for(string x : key){
		ll p = s.find(x + "=");
		p += x.size() + 1;
		ll q = s.find('&', p);
		if(q == string::npos) q = s.size();
		cout << x << ": " << s.substr(p, q - p) << endl;
	}
	return 0;
}
