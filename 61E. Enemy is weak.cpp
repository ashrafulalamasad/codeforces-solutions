#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
	fast;
	ll n;
	if(!(cin>>n)) return 0;
	vector<ll> a(n);
	for(ll i=0; i<n; i++) cin>>a[i];
	vector<ll> vals = a;
	sort(vals.begin(), vals.end());
	vals.erase(unique(vals.begin(), vals.end()), vals.end());
	ll m = vals.size();
	vector<int> rk(n);
	for(ll i=0; i<n; i++) rk[i] = (int)(lower_bound(vals.begin(), vals.end(), a[i]) - vals.begin() + 1);
	struct Fenwick{
		ll n;
		vector<ll> bit;
		void init(ll _n){ n=_n; bit.assign(n+1, 0); }
		ll sum(ll idx){ ll r=0; while(idx>0){ r+=bit[idx]; idx-=idx&-idx; } return r; }
		void add(ll idx, ll val){ while(idx<=n){ bit[idx]+=val; idx+=idx&-idx; } }
	};
	Fenwick fw; fw.init(m);
	vector<ll> left(n);
	for(ll i=0; i<n; i++){
		ll r = rk[i];
		ll s = fw.sum(r);
		left[i] = i - s;
		fw.add(r, 1);
	}
	Fenwick fw2; fw2.init(m);
	ll ans = 0;
	for(ll i=n-1; i>=0; i--){
		ll r = rk[i];
		ll right_smaller = (r>1) ? fw2.sum(r-1) : 0;
		ans += left[i] * right_smaller;
		fw2.add(r, 1);
	}
	cout<<ans<<endl;
	return 0;
}
