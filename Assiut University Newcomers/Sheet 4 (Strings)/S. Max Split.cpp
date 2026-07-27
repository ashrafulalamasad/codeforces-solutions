#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	string s; cin >> s; vector<string> ans;
	string cur; ll bal = 0;
	for(ll i = 0; i < s.size(); i++){
		cur += s[i];
		if(s[i] == 'L') bal++;
		else bal--;
		if(bal == 0){
			ans.push_back(cur);
			cur.clear();
		}
	}
	cout << ans.size() << endl;
	for(string x : ans){
		cout << x << endl;
	}
	return 0;
}
