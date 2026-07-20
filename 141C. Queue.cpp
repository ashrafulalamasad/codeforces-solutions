#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	ll n; if(!(cin >> n)) return 0;
	vector<string> name(n);
	vector<ll> a(n);
	for(ll i=0; i<n; i++) cin >> name[i] >> a[i];
	vector<pair<ll,ll>> s;
	for(ll i=0; i<n; i++) s.push_back({a[i], i});
	sort(s.begin(), s.end());
	for(ll i=0; i<n; i++){
		if(s[i].first > i){ cout << -1 << endl; return 0; }
	}
	vector<int> avail;
	vector<int> P(n+1, -1);
	ll idx = 0;
	for(ll r=0; r<n; r++){
		while(idx < n && s[idx].first <= r){ avail.push_back(s[idx].second); idx++; }
		if(avail.empty()){ cout << -1 << endl; return 0; }
		int chosen = avail.back(); avail.pop_back();
		P[n - r] = chosen;
	}
	vector<int> order;
	for(ll v=n; v>=1; v--){
		int p = P[v];
		order.insert(order.begin() + a[p], p);
	}
	vector<ll> height(n+1, 0);
	for(ll v=1; v<=n; v++) height[P[v]] = 1000000000 - (n - v);
	for(size_t i=0; i<order.size(); i++){
		cout << name[order[i]] << " " << height[order[i]] << endl;
	}
	return 0;
}
