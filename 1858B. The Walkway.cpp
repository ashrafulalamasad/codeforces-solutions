#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin >> t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n, m, d; cin >> n >> m >> d; vector<ll> s(m);
		for(ll i = 0; i < m; i++) cin >> s[i];
		vector<ll> tpos; vector<ll> posInT(m, -1);
		for(ll i = 0; i < m; i++){
			if(s[i] > 1){
				tpos.push_back(s[i]);
				posInT[i] = (ll)tpos.size();
			}
		}
		ll M = (ll)tpos.size();
		vector<ll> u(M + 2); u[0] = 1;
		for(ll i = 1; i <= M; i++) u[i] = tpos[i - 1];
		u[M + 1] = n + 1;
		auto seg = [&](ll l, ll r){
			return (r - l - 1) / d + 1;
		};
		vector<ll> val(M + 2, 0);
		ll base = 0;
		for(ll i = 1; i <= M + 1; i++){
			val[i] = seg(u[i - 1], u[i]);
			base += val[i];
		}
		ll best = (ll)4e18;
		ll ways = 0;
		for(ll i = 0; i < m; i++){
			ll cur;
			if(s[i] == 1){
				cur = base;
			}else{
				ll p = posInT[i];
				cur = base - val[p] - val[p + 1] + seg(u[p - 1], u[p + 1]);
			}
			if(cur < best){
				best = cur;
				ways = 1;
			}else if(cur == best){
				ways++;
			}
		}
		cout << best << " " << ways << endl;
	}
	return 0;
}
