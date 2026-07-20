#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n, ans = 0; string s; cin >> n >> s;
		set<char> st;
		for(ll i = 0; i < n; i++){
			if(st.count(s[i])) ans += 1;
			else{
				ans += 2;
				st.insert(s[i]);
			}
		}
		cout << ans << endl;
	}
	return 0;
}
