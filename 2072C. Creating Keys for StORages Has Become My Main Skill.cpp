#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n, x; cin >> n >> x;
		ll limit = 1;
		while(x & limit) limit <<= 1;
		ll target = min(limit, n);
		vector<ll> ans;
		for(ll i = 0; i < target; i++) ans.push_back(i);
		ll cur = 0;
		for(ll v : ans) cur |= v;
		if(cur != x){
			if(ans.size() == n) ans.pop_back();
			ans.push_back(x);
		}
		while(ans.size() < n) ans.push_back(0);
		for(ll i = 0; i < n; i++){
			cout << ans[i];
			if(i < n - 1) cout << ' ';
		}
		cout << endl;
	}
	return 0;
}
