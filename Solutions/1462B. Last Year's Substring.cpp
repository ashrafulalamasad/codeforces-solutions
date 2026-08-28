#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n; string s; cin >> n >> s;
		string target = "2020";
		bool possible = false;
		for(ll prefix = 0; prefix <= 4; prefix++){
			if(s.substr(0, prefix) == target.substr(0, prefix) &&
			   s.substr(n - (4 - prefix)) == target.substr(prefix)){
				possible = true;
			}
		}
		cout << (possible ? "YES" : "NO") << endl;
	}
	return 0;
}
