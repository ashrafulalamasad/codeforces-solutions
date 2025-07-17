#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n, k; cin >> n >> k;
		vector<ll>l(n), r(n), real(n), vals;
		vals.push_back(k);
		for(ll i = 0; i < n; i++){
			cin >> l[i] >> r[i] >> real[i];
			vals.push_back(real[i]);
		}
		sort(vals.begin(), vals.end());
		vals.erase(unique(vals.begin(), vals.end()), vals.end());
		ll m = vals.size();
		vector<ll>rid(n);
		for(ll i = 0; i < n; i++) rid[i] = lower_bound(vals.begin(), vals.end(), real[i]) - vals.begin();
		vector<vector<ll>>seg(4 * m + 5);
		function<void(ll,ll,ll,ll,ll,ll)> add = [&](ll node, ll st, ll en, ll L, ll R, ll id){
			if(L > en || R < st) return;
			if(L <= st && en <= R){
				seg[node].push_back(id);
				return;
			}
			ll mid = (st + en) / 2;
			add(node * 2, st, mid, L, R, id);
			add(node * 2 + 1, mid + 1, en, L, R, id);
		};
		for(ll i = 0; i < n; i++){
			ll L = lower_bound(vals.begin(), vals.end(), l[i]) - vals.begin();
			ll R = (upper_bound(vals.begin(), vals.end(), r[i]) - vals.begin()) - 1;
			if(L <= R) add(1, 0, m - 1, L, R, i);
		}
		vector<ll>usedCasino(n, 0), visState(m, 0);
		queue<ll>q;
		ll sidx = lower_bound(vals.begin(), vals.end(), k) - vals.begin();
		visState[sidx] = 1;
		q.push(sidx);
		ll ans = k;
		function<void(ll,ll,ll,ll)> query = [&](ll node, ll st, ll en, ll p){
			for(ll id : seg[node]){
				if(usedCasino[id]) continue;
				usedCasino[id] = 1;
				ll nx = rid[id];
				if(!visState[nx]){
					visState[nx] = 1;
					q.push(nx);
				}
			}
			seg[node].clear();
			if(st == en) return;
			ll mid = (st + en) / 2;
			if(p <= mid) query(node * 2, st, mid, p);
			else query(node * 2 + 1, mid + 1, en, p);
		};
		while(!q.empty()){
			ll p = q.front(); q.pop();
			ans = max(ans, vals[p]);
			query(1, 0, m - 1, p);
		}
		cout << ans << endl;
	}
	return 0;
}
