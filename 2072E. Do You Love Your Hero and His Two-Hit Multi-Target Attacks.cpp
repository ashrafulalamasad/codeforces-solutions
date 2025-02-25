#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll C(ll n) { return n * (n - 1) / 2; }

int main()
{
	fast;
	tc{
		ll k; cin >> k;
		if(k == 0){
			cout << 1 << endl;
			cout << 0 << " " << 0 << endl;
			continue;
		}
		vector<ll> cnt;
		while(k > 0){
			ll m = 0;
			while(C(m + 1) <= k) m++;
			cnt.push_back(m);
			k -= C(m);
		}
		ll n = 0;
		for(ll x : cnt) n += x;
		cout << n << endl;
		ll xs = 0;
		for(ll i = 0; i < cnt.size(); i++){
			for(ll j = 0; j < cnt[i]; j++)
				cout << xs + j << " " << i << endl;
			xs += cnt[i];
		}
	}
	return 0;
}
