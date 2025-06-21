#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const ll MOD = 1e9 + 7;

int main()
{
	fast;
	ll T; cin >> T;
	vector<tuple<ll,ll,ll>> cs(T);
	ll mx = 0;
	for(ll i = 0; i < T; i++){
		ll a, b, k; cin >> a >> b >> k;
		cs[i] = {a, b, k};
		mx = max(mx, max(a, b));
	}
	vector<ll> inv(mx + 2);
	inv[1] = 1;
	for(ll i = 2; i <= mx + 1; i++)
		inv[i] = MOD - (ll)(MOD / i) * inv[MOD % i] % MOD;
	for(auto &cur : cs){
		ll a, b, k; tie(a, b, k) = cur;
		ll base_n = (ll)(a - 1) * k + 1;
		ll n = base_n % MOD;
		ll bn = base_n % MOD;
		ll C = 1;
		for(ll i = 0; i < a; i++){
			ll t = (bn - i + MOD) % MOD;
			C = (ll)C * t % MOD;
			C = (ll)C * inv[i + 1] % MOD;
		}
		ll bm = (ll)(b - 1) * k % MOD;
		ll m = ((ll)bm * C + 1) % MOD;
		cout << n << " " << m << endl;
	}
	return 0;
}
