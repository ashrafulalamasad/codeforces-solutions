#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	string s; cin >> s;
	ll e = 0, g = 0, y = 0, p = 0, t = 0;
	for(char c : s){
		c = tolower(c);
		if(c == 'e') e++;
		else if(c == 'g') g++;
		else if(c == 'y') y++;
		else if(c == 'p') p++;
		else if(c == 't') t++;
	}
	cout << min({e, g, y, p, t}) << endl;
	return 0;
}
