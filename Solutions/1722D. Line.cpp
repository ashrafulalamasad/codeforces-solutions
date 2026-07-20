#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin >> t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n, base = 0; string s; cin >> n >> s;
		vector<ll> gain;
		for(ll i = 0; i < n; i++){
			ll cur;
			if(s[i] == 'L') cur = i;
			else cur = n - 1 - i;
			base += cur;
			ll after;
			if(s[i] == 'L') after = n - 1 - i;
			else after = i;
			if(after > cur) gain.push_back(after - cur);
		}
		sort(gain.rbegin(), gain.rend());
		ll ans = base;
		for(ll k = 1; k <= n; k++){
			if(k <= (ll)gain.size()) ans += gain[k - 1];
			cout << ans << " ";
		}
		cout << endl;
	}
	return 0;
}
