#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll T;cin>>T;while(T--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	vector<ll> tests;
	ll T; cin >> T;
	ll mxN = 0;
	for(ll i = 0; i < T; i++){
		ll n; cin >> n;
		tests.push_back(n);
		mxN = max(mxN, n);
	}
	vector<bool> isPrime(mxN + 1, true);
	isPrime[0] = isPrime[1] = false;
	for(ll i = 2; i * i <= mxN; i++)
		if(isPrime[i])
			for(ll j = i * i; j <= mxN; j += i)
				isPrime[j] = false;
	vector<ll> primes;
	for(ll i = 2; i <= mxN; i++)
		if(isPrime[i]) primes.push_back(i);
	for(ll n : tests){
		ll ans = 0;
		for(ll p : primes){
			if(p > n) break;
			ans += n / p;
		}
		cout << ans << endl;
	}
	return 0;
}
