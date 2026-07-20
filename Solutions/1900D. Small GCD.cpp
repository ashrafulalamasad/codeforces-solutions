#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin >> t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
	fast;
	const ll N = 100000;
	vector<ll> phi(N + 1), divs[N + 1];
	for(ll i = 0; i <= N; i++) phi[i] = i;
	for(ll i = 2; i <= N; i++) if(phi[i] == i) for(ll j = i; j <= N; j += i) phi[j] -= phi[j] / i;
	for(ll i = 1; i <= N; i++) for(ll j = i; j <= N; j += i) divs[j].push_back(i);
	tc{
		ll n; cin >> n; vector<ll> a(n);
		for(ll i = 0; i < n; i++) cin >> a[i];
		sort(a.begin(), a.end());
		vector<ll> cnt(N + 1, 0);
		ll ans = 0;
		for(ll j = 0; j < n; j++){
			ll x = a[j], sum = 0;
			for(ll d : divs[x]) sum += phi[d] * cnt[d];
			ans += sum * (n - j - 1);
			for(ll d : divs[x]) cnt[d]++;
		}
		cout << ans << endl;
	}
	return 0;
}
