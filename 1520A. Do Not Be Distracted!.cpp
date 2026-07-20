#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t; cin >> t; while(t--)
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
	fast;
	tc{
		ll n; string s; cin >> n >> s;
		set<char> seen; char last = s[0];
		seen.insert(last);
		bool ok = true;
		for(ll i = 1; i < n; i++){
			if(s[i] == last) continue;
			if(seen.count(s[i])){ ok = false; break; }
			seen.insert(s[i]);
			last = s[i];
		}
		if(ok) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
    return 0;
}
