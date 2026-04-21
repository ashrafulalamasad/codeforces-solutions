#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const ll MOD = 998244353;

ll count_res(ll m, ll d) {
  if (m < d) return 0;
  return (m - d) / 4 + 1;
}

ll modmul(ll a, ll b, ll mod) {
  ll res = 0;
  a %= mod;
  if (a < 0) a += mod;
  while (b > 0) {
    if (b & 1) {
      res = (res + a) % mod;
    }
    a = (a * 2) % mod;
    b /= 2;
  }
  return res;
}

int main()
{
	fast;
	tc{
		ll n, x; cin >> n >> x;
		ll L = x - 1;
		ll c0_left = count_res(L, 3) + 1;
		ll c1_left = count_res(L, 1);
		ll c3_n = count_res(n, 3);
		ll c3_L = count_res(L, 3);
		ll c0_right = c3_n - c3_L;
		ll c1_n = count_res(n, 1);
		ll c1_L = count_res(L, 1);
		ll c1_right = c1_n - c1_L;
		ll ans = modmul(c0_left, c0_right, MOD);
		ans = (ans + modmul(c1_left, c1_right, MOD)) % MOD;
		cout << ans << endl;
	}
	return 0;
}
