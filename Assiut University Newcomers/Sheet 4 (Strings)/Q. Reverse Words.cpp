#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	string s; getline(cin, s);
	for(ll i = 0; i < s.size(); i++){
		if(s[i] == ' '){
			cout << ' ';
			continue;
		}
		ll j = i;
		while(j < s.size() && s[j] != ' ') j++;
		for(ll k = j - 1; k >= i; k--){
			cout << s[k];
        }
		i = j - 1;
	}
	return 0;
}
