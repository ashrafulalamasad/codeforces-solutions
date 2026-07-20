#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin >> t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n; cin >> n;
		ll sq = (ll)sqrtl(n), cb = (ll)cbrtl(n), six = (ll)powl(n, 1.0 / 6.0);
		while(sq * sq <= n) sq++;
		sq--;
		while(cb * cb * cb <= n) cb++;
		cb--;
		while(six * six * six * six * six * six <= n) six++;
		six--;
		ll ans = sq + cb - six;
		cout << ans << endl;
	}
	return 0;
}
