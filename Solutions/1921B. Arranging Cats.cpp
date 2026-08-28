#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n; cin >> n;
		string s, f; cin >> s >> f;
		ll additions = 0, removals = 0;
		for(ll i = 0; i < n; i++){
			if(s[i] == '0' && f[i] == '1') additions++;
			if(s[i] == '1' && f[i] == '0') removals++;
		}
		cout << max(additions, removals) << endl;
	}
	return 0;
}
