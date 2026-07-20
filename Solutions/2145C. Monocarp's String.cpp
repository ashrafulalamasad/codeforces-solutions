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
		ll d = 0;
		for(char c : s) d += (c == 'a') ? 1 : -1;
		if(d == 0){ cout << 0 << endl; continue; }
		unordered_map<ll, ll> last;
		last[0] = 0;
		ll pref = 0, ans = n;
		for(ll i = 1; i <= n; i++){
			pref += (s[i-1] == 'a') ? 1 : -1;
			ll need = pref - d;
			if(last.count(need))
				ans = min(ans, i - last[need]);
			last[pref] = i;
		}
		cout << (ans == n ? -1 : ans) << endl;
	}
    return 0;
}
