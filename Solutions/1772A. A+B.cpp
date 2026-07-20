#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
	fast;
	tc{
		string s; cin >> s;
		ll a = s[0]-'0';
		ll b = s[2]-'0';
		cout << a+b << endl;
	}
	return 0;
}
