#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin >> t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
	fast;
	tc{
		string s; cin >> s;
		ll a = 0;
		for(ll i = 0; i < 5; i++) if(s[i] == 'A') a++;
		if(a > 2) cout << 'A' << endl;
		else cout << 'B' << endl;
	}
	return 0;
}
