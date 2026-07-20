#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
	fast;
	tc{
		int n, m; cin >> n >> m; vector<string> a(n);
		for(int i=0; i<n; i++) cin >> a[i];
		string base = a[0];
		auto works = [&](const string &s)->bool{
			for(int i=0; i<n; i++){
				int diff = 0;
				for(int j=0; j<m; j++) if(s[j] != a[i][j]) diff++;
				if(diff > 1) return false;
			}
			return true;
		};
		if(works(base)){
			cout << base << endl;
			continue;
		}
		bool found = false;
		for(int pos=0; pos<m && !found; pos++){
			for(char c='a'; c<='z' && !found; c++){
				string s = base;
				s[pos] = c;
				if(works(s)){
					cout << s << endl;
					found = true;
				}
			}
		}
		if(!found) cout << "-1\n";
	}
	return 0;
}
