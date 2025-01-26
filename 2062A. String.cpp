#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		string s; cin >> s;
		ll ans = 0;
		for(char c : s) if(c == '1') ans++;
		cout << ans << endl;
	}
	return 0;
}
