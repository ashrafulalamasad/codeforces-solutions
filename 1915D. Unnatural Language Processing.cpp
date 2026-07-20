#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
	fast;
	tc{
		ll n; cin >> n;
		string s; cin >> s;
		vector<string> syl;
		for(ll i=n-1; i>=0; ){
			if(s[i] == 'a' || s[i] == 'e'){
				syl.push_back(s.substr(i-1, 2));
				i -= 2;
			}else{
				syl.push_back(s.substr(i-2, 3));
				i -= 3;
			}
		}
		for(ll i=(ll)syl.size()-1; i>=0; i--)
			cout << syl[i] << ".\n"[i==0];
	}
	return 0;
}
