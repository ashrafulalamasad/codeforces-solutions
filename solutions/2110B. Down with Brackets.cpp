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
		ll bal = 0, cnt = 0;
		for(char c : s){
			if(c == '(') bal++;
			else bal--;
			if(bal == 0) cnt++;
		}
		cout << (cnt > 1 ? "YES" : "NO") << endl;
	}
	return 0;
}
