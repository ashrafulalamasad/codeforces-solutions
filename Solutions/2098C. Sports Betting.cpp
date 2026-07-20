#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n; cin >> n; vector<ll>a(n);
		for(ll i = 0; i < n; i++)cin >> a[i];
		sort(a.begin(), a.end());
		vector<pair<ll,ll>> v;
		for(ll i = 0; i < n;){
			ll j = i;
			while(j < n && a[j] == a[i]) j++;
			v.push_back({a[i], j - i});
			i = j;
		}
		bool ok = false;
		for(ll i = 0; i < (ll)v.size(); i++){
			if(v[i].second>=4)ok=true;
		}
		for(ll i = 0; i < (ll)v.size() && !ok;){
			ll j = i;
			while(j + 1 < (ll)v.size() && v[j + 1].first == v[j].first + 1) j++;
			ll cnt = 0;
			for(ll p = i; p <= j; p++){
				if(v[p].second >= 2)cnt++;
			}
			if(cnt >= 2) ok = true;
			i = j + 1;
		}
		cout << (ok ? "Yes" : "No") << endl;
	}
	return 0;
}
