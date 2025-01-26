#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n; cin >> n; vector<ll> a(n);
		for(ll i = 0; i < n; i++) cin >> a[i];
		ll ans = accumulate(a.begin(), a.end(), 0LL);
		vector<ll> cur = a;
		for(ll step = 0; step < n - 1; step++){
			if(cur[0] > cur.back())
				reverse(cur.begin(), cur.end());
			vector<ll> nxt;
			for(ll i = 0; i + 1 < (ll)cur.size(); i++)
				nxt.push_back(cur[i + 1] - cur[i]);
			cur = nxt;
			ans = max(ans, accumulate(cur.begin(), cur.end(), 0LL));
		}
		cout << ans << endl;
	}
	return 0;
}
