#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	string a, b; cin >> a >> b;
	if(a.size() != b.size()){
		cout << "NO" << endl;
		return 0;
	}
	if(a == b){
		vector<ll> cnt(26, 0);
		for(char c : a) cnt[c - 'a']++;
		for(ll i = 0; i < 26; i++){
			if(cnt[i] > 1){
				cout << "YES" << endl;
				return 0;
			}
		}
		cout << "NO" << endl;
		return 0;
	}
	vector<ll> diff;
	for(ll i = 0; i < (ll)a.size(); i++){
		if(a[i] != b[i]) diff.push_back(i);
	}
	if(diff.size() != 2) cout << "NO" << endl;
	else if(a[diff[0]] == b[diff[1]] && a[diff[1]] == b[diff[0]]) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
