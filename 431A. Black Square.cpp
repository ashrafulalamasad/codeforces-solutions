#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	ll a1, a2, a3, a4; cin >> a1 >> a2 >> a3 >> a4;
	string s; cin >> s;
	ll ans = 0;
	for(ll i = 0; i < s.size(); i++){
		if(s[i] == '1') ans += a1;
		else if(s[i] == '2') ans += a2;
		else if(s[i] == '3') ans += a3;
		else ans += a4;
	}
	cout << ans << endl;
	return 0;
}
