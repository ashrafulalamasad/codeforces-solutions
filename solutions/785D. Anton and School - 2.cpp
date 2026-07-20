#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
	fast;
	string s; cin >> s;
	int n = (int)s.size();
	vector<int> preOpen(n+1,0), preClose(n+1,0);
	for(int i=1; i<=n; i++){
		preOpen[i] = preOpen[i-1] + (s[i-1] == '(');
		preClose[i] = preClose[i-1] + (s[i-1] == ')');
	}
	const ll MOD = 1000000007LL;
	int maxN = n;
	vector<ll> fact(maxN+5), invfact(maxN+5);
	fact[0] = 1;
	for(int i=1; i<=maxN; i++) fact[i] = fact[i-1] * i % MOD;
	auto modpow = [&](ll a, ll e){ ll r = 1; while(e){ if(e&1) r = r * a % MOD; a = a * a % MOD; e >>= 1; } return r; };
	invfact[maxN] = modpow(fact[maxN], MOD-2);
	for(int i=maxN; i>0; i--) invfact[i-1] = invfact[i] * i % MOD;
	auto C = [&](int nn, int kk)->ll{
		if(kk < 0 || kk > nn) return 0;
		return fact[nn] * invfact[kk] % MOD * invfact[nn-kk] % MOD;
	};
	ll ans = 0;
	for(int r=1; r<=n; r++){
		if(s[r-1] != ')') continue;
		int A = preOpen[r-1];
		int B = preClose[n] - preClose[r];
		if(A <= 0) continue;
		ans += C(A + B, A - 1);
		if(ans >= MOD) ans -= MOD;
	}
	cout << ans % MOD << endl;
	return 0;
}
