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
		vector<ll> p(n+1), pos(n+1);
		for(ll i = 1; i <= n; i++){
			cin >> p[i];
			pos[p[i]] = i;
		}
		string x; cin >> x;
		x = " " + x;
		bool imp = false;
		if(x[1] == '1' || x[n] == '1') imp = true;
		for(ll i = 1; i <= n; i++)
			if(x[i] == '1' && (p[i] == 1 || p[i] == n)) imp = true;
		if(imp){
			cout << -1 << endl;
			continue;
		}
		bool all_zero = true;
		for(ll i = 1; i <= n; i++)
			if(x[i] == '1'){ all_zero = false; break; }
		if(all_zero){
			cout << 0 << endl;
			continue;
		}
		set<pair<ll,ll>> ops;
		ops.insert({1, n});
		if(pos[1] > 1) ops.insert({1, pos[1]});
		if(pos[1] < n) ops.insert({pos[1], n});
		if(pos[n] > 1) ops.insert({1, pos[n]});
		if(pos[n] < n) ops.insert({pos[n], n});
		cout << ops.size() << endl;
		for(auto [l, r] : ops) cout << l << " " << r << endl;
	}
	return 0;
}
