#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin >> t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		string s; cin >> s;
		ll n = (ll)s.length();
		if(n % 2){
			cout << "NO" << endl;
		}else{
			ll half = n / 2;
			string first = s.substr(0, half);
			string second = s.substr(half, half);
			if(first == second){
				cout << "YES" << endl;
			}else{
				cout << "NO" << endl;
			}
		}
	}
	return 0;
}
