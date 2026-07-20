#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	ll n; cin >> n; vector<string> path;
	for(ll i=0; i<n; i++){
		string cmd; cin >> cmd;
		if(cmd == "pwd"){
			cout << "/";
			for(auto &s: path) cout << s << "/";
			cout << endl;
		}else{
			string p; cin >> p;
			if(p.size() > 0 && p[0] == '/') path.clear();
			for(size_t j = (p.size()>0 && p[0]=='/'?1:0); j < p.size(); ){
				size_t k = p.find('/', j);
				if(k == string::npos) k = p.size();
				string token = p.substr(j, k-j);
				if(token == ".."){
					if(!path.empty()) path.pop_back();
				} else if(!token.empty()){
					path.push_back(token);
				}
				j = k + 1;
			}
		}
	}
	return 0;
}
