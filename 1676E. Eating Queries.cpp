#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n, q; cin >> n >> q; vector<ll>a(n);
		for(ll i = 0; i < n; i++) cin >> a[i];
		sort(a.rbegin(), a.rend());
		vector<ll>pre(n); pre[0] = a[0];
		for(ll i = 1; i < n; i++) pre[i] = pre[i - 1] + a[i];
		while(q--){
			ll x; cin >> x;
			auto it = lower_bound(pre.begin(), pre.end(), x);
			if(it == pre.end()) cout << -1 << endl;
			else cout << (it - pre.begin()) + 1 << endl;
		}
	}
	return 0;
}
