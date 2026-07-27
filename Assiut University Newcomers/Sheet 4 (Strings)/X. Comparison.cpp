#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	string s; cin >> s;
	ll n = s.size();
	if(n == 1){
		cout << s << endl;
		return 0;
	}
	ll pref[26] = {}, suf[26] = {};
	for(char c : s) suf[c - 'a']++;
	string ans = "{";
	for(ll i = 0; i < n-1; i++){
		pref[s[i] - 'a']++;
		suf[s[i] - 'a']--;
		string cur;
		cur.reserve(n);
		for(ll j = 0; j < 26; j++){
			if(pref[j] > 0){
				for(ll k = 0; k < pref[j]; k++){
					cur += char('a' + j);
				}
			}
		}
		for(ll j = 0; j < 26; j++){
			if(suf[j] > 0){
				for(ll k = 0; k < suf[j]; k++){
					cur += char('a' + j);
				}
			}
		}
		if(cur < ans) ans = cur;
	}
	cout << ans << endl;
	return 0;
}
