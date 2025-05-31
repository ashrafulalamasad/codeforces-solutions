#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n; cin >> n; vector<ll> p(n), q(n);
		for(ll i = 0; i < n; i++) cin >> p[i];
		for(ll i = 0; i < n; i++) cin >> q[i];
		ll MOD = 998244353;
		vector<ll> pw2(n + 1);
		pw2[0] = 1;
		for(ll i = 1; i <= n; i++) pw2[i] = pw2[i - 1] * 2 % MOD;
		vector<ll> prefP(n), prefQ(n);
		prefP[0] = 0; prefQ[0] = 0;
		for(ll i = 1; i < n; i++)
			prefP[i] = (p[i] > p[prefP[i - 1]]) ? i : prefP[i - 1];
		for(ll i = 1; i < n; i++)
			prefQ[i] = (q[i] > q[prefQ[i - 1]]) ? i : prefQ[i - 1];
		for(ll i = 0; i < n; i++){
			ll j1 = prefP[i], u1 = p[j1], k1 = i - j1;
			ll v1 = (k1 >= 0 && k1 < n) ? q[k1] : -1;
			ll a1 = max(u1, v1), b1 = min(u1, v1);
			ll j2 = prefQ[i], v2 = q[j2], k2 = i - j2;
			ll u2 = (k2 >= 0 && k2 < n) ? p[k2] : -1;
			ll a2 = max(u2, v2), b2 = min(u2, v2);
			ll A, B;
			if(v1 < 0){ A = a2; B = b2; }
			else if(u2 < 0){ A = a1; B = b1; }
			else if(a1 > a2 || (a1 == a2 && b1 > b2)){ A = a1; B = b1; }
			else{ A = a2; B = b2; }
			cout << (pw2[A] + pw2[B]) % MOD << " ";
		}
		cout << endl;
	}
	return 0;
}
