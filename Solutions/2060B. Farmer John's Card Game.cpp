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
		vector<vector<ll>> a(n, vector<ll>(m));
		for(ll i = 0; i < n; i++){
			for(ll j = 0; j < m; j++) cin >> a[i][j];
			sort(a[i].begin(), a[i].end());
		}
		vector<pair<ll,ll>> ord;
		for(ll i = 0; i < n; i++) ord.push_back({a[i][0], i});
		sort(ord.begin(), ord.end());
		ll last = -1;
		bool ok = true;
		for(ll j = 0; j < m; j++){
			for(auto &p : ord){
				ll idx = p.second;
				auto it = upper_bound(a[idx].begin(), a[idx].end(), last);
				if(it == a[idx].end()){ ok = false; break; }
				last = *it;
				a[idx].erase(it);
			}
			if(!ok) break;
		}
		if(ok) for(auto &p : ord) cout << p.second + 1 << " ";
		else cout << -1;
		cout << endl;
	}
	return 0;
}
