#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	string s; cin >> s;
	for(ll i = 0; i < s.size(); i++){
		if(i + 4 < s.size() && s.substr(i, 5) == "EGYPT"){
			cout << ' ';
			i += 4;
		}
		else cout << s[i];
	}
	return 0;
}
