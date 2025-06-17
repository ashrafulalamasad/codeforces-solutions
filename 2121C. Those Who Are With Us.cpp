#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n, m, mx = 0; cin >> n >> m;
		vector<vector<ll>>a(n, vector<ll>(m));
		for(ll i = 0; i < n; i++){
			for(ll j = 0; j < m; j++){
				cin >> a[i][j];
				mx = max(mx, a[i][j]);
			}
		}
		vector<pair<ll,ll>>pos;
		for(ll i = 0; i < n; i++){
			for(ll j = 0; j < m; j++){
				if(a[i][j] == mx) pos.push_back({i, j});
			}
		}
		ll r0 = pos[0].first, c0 = pos[0].second;
		auto checkRow = [&](ll r){
			ll need = -1;
			for(auto p : pos){
				if(p.first == r) continue;
				if(need == -1) need = p.second;
				else if(need != p.second) return false;
			}
			return true;
		};
		auto checkCol = [&](ll c){
			ll need = -1;
			for(auto p : pos){
				if(p.second == c) continue;
				if(need == -1) need = p.first;
				else if(need != p.first) return false;
			}
			return true;
		};
		if(checkRow(r0) || checkCol(c0)) cout << mx - 1 << endl;
		else cout << mx << endl;
	}
	return 0;
}
