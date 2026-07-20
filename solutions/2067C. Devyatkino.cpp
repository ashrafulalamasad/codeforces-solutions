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
		ll ans = -1;
		for(ll k = 0; k <= 9; k++){
			ll m = n - k;
			ll d[20] = {0};
			ll tmp = m;
			ll pos = 0;
			while(tmp){
				d[pos++] = tmp % 10;
				tmp /= 10;
			}
			if(d[0] == 7){ ans = k; break; }
			ll f1 = 1e9;
			for(ll j = 1; j < 18; j++){
				ll need0 = (7 - d[j] + 10) % 10;
				if(need0 <= k){ ans = k; break; }
				if(f1 < 1e9){
					ll need1 = (6LL - d[j] + 10) % 10;
					if(need1 <= k - f1){ ans = k; break; }
				}
				f1 = min(max(0LL, 10LL - d[j]), f1 + max(0LL, 9LL - d[j]));
			}
			if(ans != -1) break;
		}
		cout << ans << endl;
	}
	return 0;
}
