#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll mod = 1e9 + 7;

ll power(ll base, ll exponent){
	ll result = 1;
	while(exponent > 0){
		if(exponent & 1) result = result * base % mod;
		base = base * base % mod;
		exponent >>= 1;
	}
	return result;
}

int main()
{
	fast;
	vector<ll> factorial(200001), inverseFactorial(200001); factorial[0] = 1;
	for(ll i = 1; i <= 200000; i++) factorial[i] = factorial[i - 1] * i % mod;
	inverseFactorial[200000] = power(factorial[200000], mod - 2);
	for(ll i = 200000; i > 0; i--) inverseFactorial[i - 1] = inverseFactorial[i] * i % mod;
	tc{
		ll n, m, k; cin >> n >> m >> k; vector<ll> a(n);
		for(ll i = 0; i < n; i++) cin >> a[i];
		if(m > n){
			cout << 0 << endl;
			continue;
		}
		sort(a.begin(), a.end());
		ll answer = 0, left = 0;
		for(ll right = 0; right < n; right++){
			while(a[right] - a[left] > k) left++;
			ll count = right - left;
			if(count >= m - 1){
				answer = (answer + factorial[count] * inverseFactorial[m - 1] % mod *
						  inverseFactorial[count - m + 1]) % mod;
			}
		}
		cout << answer << endl;
	}
	return 0;
}
