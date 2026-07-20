#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n, m; cin >> n >> m;
		vector<ll> a(n + 1), b(m + 2);
		for(ll i = 1; i <= n; i++) cin >> a[i];
		for(ll i = 1; i <= m; i++) cin >> b[i];
		ll i = 1;
		bool ok = false;
		for(ll j = 1; j <= m; j++){
			while(i <= n && a[i] < b[j]) i++;
			if(i > n){ ok = false; break; }
			if(j == m) ok = true;
			i++;
		}
		if(ok){ cout << 0 << endl; continue; }
		const ll INF = n + 1;
		vector<ll> l(m + 1, INF);
		l[0] = 0; i = 1;
		for(ll j = 1; j <= m; j++){
			ll pos = INF;
			while(i <= n){ if(a[i] >= b[j]){ pos = i; i++; break; } i++; }
			l[j] = pos;
		}
		vector<ll> r(m + 2, 0);
		r[m + 1] = n + 1; i = n;
		for(ll j = m; j >= 1; j--){
			ll pos = 0;
			while(i >= 1){ if(a[i] >= b[j]){ pos = i; i--; break; } i--; }
			r[j] = pos;
		}
		ll ans = LLONG_MAX;
		for(ll j = 1; j <= m; j++)
			if(l[j - 1] < r[j + 1])
				ans = min(ans, b[j]);
		if(ans == LLONG_MAX) cout << -1 << endl;
		else cout << ans << endl;
	}
	return 0;
}
