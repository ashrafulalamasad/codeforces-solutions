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
		vector<ll>pos(1001, -1);
		for(ll i = 1; i <= n; i++){
			ll x; cin >> x;
			pos[x] = i;
		}
		ll ans = -1;
		for(ll i = 1; i <= 1000; i++){
			if(pos[i] == -1) continue;
			for(ll j = 1; j <= 1000; j++){
				if(pos[j] == -1) continue;
				if(__gcd(i, j) == 1){
					ans = max(ans, pos[i] + pos[j]);
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}
