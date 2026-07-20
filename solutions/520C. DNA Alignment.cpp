#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	ll n; cin >> n; string s; cin >> s;
	vector<ll> cnt(4,0);
	for(char c: s){
		if(c=='A'){
			cnt[0]++;
		}else if(c=='C'){
			cnt[1]++;
		}else if(c=='G'){
			cnt[2]++;
		}else{
			cnt[3]++;
		}
	}
	ll mx = 0;
	for(ll v: cnt) mx = max(mx, v);
	ll k = 0;
	for(ll v: cnt) if(v == mx) k++;
	const ll MOD = 1000000007;
	ll res = 1;
	for(ll i=0; i<n; i++) res = (res * k) % MOD;
	cout << res << endl;
	return 0;
}
