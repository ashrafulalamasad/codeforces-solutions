#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		string a; cin >> a;
		reverse(a.begin(), a.end());
		for(char &c : a){
			if(c == 'p') c = 'q';
			else if(c == 'q') c = 'p';
		}
		cout << a << endl;
	}
	return 0;
}
