#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
	fast;
	tc{
		ll n, k, ones = 0; cin >> n >> k;
		for(ll i=0; i<n; i++){
			ll x; cin >> x; ones += x;
		}
		ll zeros = n - ones;
		ll m = (k+1)/2, maxN = n;
		const ll MOD = 1000000007LL;
		vector<ll> fact(maxN+5), invFact(maxN+5);
		fact[0] = 1;
		for(ll i=1; i<=maxN; i++) fact[i] = fact[i-1] * i % MOD;
		auto modpow = [&](ll a, ll e){ ll r = 1; while(e){ if(e&1) r = r * a % MOD; a = a * a % MOD; e >>= 1; } return r; };
		invFact[maxN] = modpow(fact[maxN], MOD-2);
		for(ll i=maxN; i>0; i--) invFact[i-1] = invFact[i] * i % MOD;
		auto C = [&](ll nn, ll kk) -> ll {
			if(kk < 0 || kk > nn) return 0;
			return fact[nn] * invFact[kk] % MOD * invFact[nn-kk] % MOD;
		};
		ll ans = 0;
		for(ll i=m; i<=min(k, ones); i++){
			ans += C(ones, i) * C(zeros, k-i) % MOD;
			if(ans >= MOD) ans -= MOD;
		}
		cout << ans << endl;
	}
	return 0;
}
