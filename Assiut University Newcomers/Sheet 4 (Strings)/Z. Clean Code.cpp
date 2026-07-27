#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	string s, line;
	while(getline(cin, line)){
		s += line + '\n';
	}
	string clean;
	ll n = s.size();
	for(ll i = 0; i < n; i++){
		if(s[i] == '/' && i + 1 < n){
			if(s[i + 1] == '/'){
				while(i < n && s[i] != '\n') i++;
				if(i < n) clean += s[i];
			}else if(s[i + 1] == '*'){
				i += 2;
				while(i + 1 < n && !(s[i] == '*' && s[i + 1] == '/')) i++;
				if(i + 1 < n) i++;
			}else{
				clean += s[i];
			}
		}else{
			clean += s[i];
		}
	}
	string cur;
	for(char c : clean){
		if(c == '\n'){
			bool has = false;
			for(char x : cur){
				if(x != ' ' && x != '\t'){
					has = true;
					break;
				}
			}
			if(has) cout << cur << '\n';
			cur.clear();
		}else{
			cur += c;
		}
	}
	if(!cur.empty()){
		bool has = false;
		for(char x : cur){
			if(x != ' ' && x != '\t'){
				has = true;
				break;
			}
		}
		if(has) cout << cur << '\n';
	}
	return 0;
}
