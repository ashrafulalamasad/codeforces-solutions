#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	ll n; cin >> n;
	vector<ll> f(n + 1), used(n + 1, 0), give, take;
	for(ll i = 1; i <= n; i++){
		cin >> f[i];
		if(f[i]) used[f[i]] = 1;
	}
	for(ll i = 1; i <= n; i++){
		if(f[i] == 0) give.push_back(i);
		if(!used[i]) take.push_back(i);
	}
	ll m = (ll)give.size();
	for(ll i = 0; i < m; i++) f[give[i]] = take[i];
	vector<ll> bad;
	for(ll i = 0; i < m; i++){
		if(give[i] == take[i]) bad.push_back(i);
	}
	if((ll)bad.size() == 1){
		ll i = bad[0], j = (i + 1) % m;
		swap(f[give[i]], f[give[j]]);
	}else if((ll)bad.size() > 1){
		ll s = (ll)bad.size();
		for(ll i = 0; i < s; i++){
			f[give[bad[i]]] = give[bad[(i + 1) % s]];
		}
	}
	for(ll i = 1; i <= n; i++) cout << f[i] << " ";
	cout << endl;
	return 0;
}
