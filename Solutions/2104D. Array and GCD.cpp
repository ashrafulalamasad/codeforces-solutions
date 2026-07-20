#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	const ll MAX_N = 400000;
	vector<ll> primes;
	vector<bool> is_prime(6000001, true);
	is_prime[0] = is_prime[1] = false;
	for(ll i = 2; i <= 6000000 && primes.size() < MAX_N; i++){
		if(is_prime[i]){
			primes.push_back(i);
			for(ll j = (ll)i * i; j <= 6000000; j += i)
				is_prime[j] = false;
		}
	}
	vector<ll> prime_sum(MAX_N + 1);
	for(ll i = 0; i < primes.size(); i++)
		prime_sum[i + 1] = prime_sum[i] + primes[i];
	tc{
		ll n; cin >> n; vector<ll> a(n);
		for(ll i = 0; i < n; i++) cin >> a[i];
		if(n <= 1){
			cout << 0 << endl;
			continue;
		}
		sort(a.begin(), a.end(), greater<ll>());
		vector<ll> array_sum(n + 1, 0);
		for(ll i = 0; i < n; i++)
			array_sum[i + 1] = array_sum[i] + a[i];
		ll keep = 0;
		for(ll m = 1; m <= n; m++){
			if(array_sum[m] >= prime_sum[m])
				keep = m;
			else
				break;
		}
		cout << n - keep << endl;
	}
	return 0;
}
