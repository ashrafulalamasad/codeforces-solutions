#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n, x, y; cin >> n >> x >> y;
		ll diff = y - x;
		ll best = 1e9, start = 0, d = 0;
		for(ll i=1; i<=diff; i++){
			if(diff % i) continue;
			ll cnt = diff / i + 1;
			if(cnt > n) continue;
			ll need = n - cnt;
			ll can = (x - 1) / i;
			ll take = min(need, can);
			ll s = x - take * i;
			ll mx = s + (n - 1) * i;
			if(mx < best){
				best = mx;
				start = s;
				d = i;
			}
		}
		for(ll i=0; i<n; i++) cout << start + i * d << " \n"[i==n-1];
	}
	return 0;
}
