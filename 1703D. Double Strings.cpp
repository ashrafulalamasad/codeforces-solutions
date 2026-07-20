#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n; cin >> n; vector<string>s(n); set<string> st;
		for(ll i = 0; i < n; i++){
			cin >> s[i];
			st.insert(s[i]);
		}
		string ans = "";
		for(ll i = 0; i < n; i++){
			bool ok = false;
			for(ll j = 1; j < s[i].size(); j++){
				string a = s[i].substr(0, j);
				string b = s[i].substr(j);
				if(st.count(a) && st.count(b)){
					ok = true;
					break;
				}
			}
			if(ok) ans += '1';
			else ans += '0';
		}
		cout << ans << endl;
	}
	return 0;
}
