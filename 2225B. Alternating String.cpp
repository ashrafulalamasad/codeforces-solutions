#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
	fast;
	tc{
		string s; cin >> s;
		ll cnt = 0;
		for(ll i=0; i+1<(ll)s.size(); i++){
			if(s[i] == s[i+1]) cnt++;
		}
		if(cnt <= 2) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
