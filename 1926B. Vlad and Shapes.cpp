#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin >> t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
	fast;
	tc{
		ll n; cin >> n; vector<ll> v;
		for(ll i = 0; i < n; i++){
			string s; cin >> s;
			ll cnt = 0;
			for(ll j = 0; j < n; j++) if(s[j] == '1') cnt++;
			if(cnt) v.push_back(cnt);
		}
		if(v[0] == v[1]) cout << "SQUARE" << endl;
		else cout << "TRIANGLE" << endl;
	}
	return 0;
}
