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
		ll m = n + n / 2, maxCarry = 2 * n;
		vector<ll> freq(m + 1, 0);
		for(ll i = 0; i < n; i++){
			ll x; cin >> x;
			freq[x]++;
		}
		vector<bool> cur(maxCarry + 1, false), nxt(maxCarry + 1, false);
		cur[0] = true;
		for(ll x = 1; x <= m; x++){
			fill(nxt.begin(), nxt.end(), false);
			for(ll carry = 0; carry <= maxCarry; carry++){
				if(!cur[carry]) continue;
				ll F = freq[x] + carry;
				for(ll k = 0; k <= F; k++){
					ll rem = F - k;
					if(rem % 2 != 0 || (k > 0 && rem < 2)) continue;
					if(k <= maxCarry) nxt[k] = true;
				}
			}
			cur = nxt;
		}
		cout << (cur[0] ? "YES" : "NO") << endl;
	}
	return 0;
}
