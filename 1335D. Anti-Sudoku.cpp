#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		vector<string> s(9);
		for(ll i=0; i<9; i++) cin >> s[i];
		for(ll i=0; i<9; i++){
			ll j = (i%3)*3 + i/3;
			if(s[i][j] == '9') s[i][j] = '1'; else s[i][j] = s[i][j] + 1;
		}
		for(ll i=0; i<9; i++) cout << s[i] << endl;
	}
	return 0;
}
