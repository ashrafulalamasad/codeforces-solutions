#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
	fast;
	tc{
		ll cnt[3] = {0};
		for(int i=0; i<3; i++){
			string s; cin >> s;
			for(char c : s)
				if(c != '?') cnt[c-'A']++;
		}
		for(int i=0; i<3; i++)
			if(cnt[i] == 2) cout << char('A'+i) << endl;
	}
	return 0;
}
