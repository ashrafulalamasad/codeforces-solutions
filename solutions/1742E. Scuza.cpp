#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n, q; cin >> n >> q;
		vector<ll>a(n), mx(n), pre(n);
		for(ll i = 0; i < n; i++) cin >> a[i];
		mx[0] = a[0]; pre[0] = a[0];
		for(ll i = 1; i < n; i++){
			mx[i] = max(mx[i - 1], a[i]);
			pre[i] = pre[i - 1] + a[i];
		}
		for(ll i = 0; i < q; i++){
			ll k; cin >> k;
			ll idx = upper_bound(mx.begin(), mx.end(), k) - mx.begin() - 1;
			if(idx < 0) cout << 0 << " ";
			else cout << pre[idx] << " ";
		}
		cout << endl;
	}
	return 0;
}
