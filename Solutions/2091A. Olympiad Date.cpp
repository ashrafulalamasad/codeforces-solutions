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
		ll cnt[10] = {0};
		ll req[10] = {3, 1, 2, 1, 0, 1, 0, 0, 0, 0};
		ll ans = 0;
		for(ll i = 1; i <= n; i++){
			ll d; cin >> d;
			cnt[d]++;
			if(!ans){
				bool ok = true;
				for(ll j = 0; j < 10; j++)
					if(cnt[j] < req[j]){ ok = false; break; }
				if(ok) ans = i;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
