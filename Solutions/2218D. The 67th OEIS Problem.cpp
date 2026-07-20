#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	ll LIM = 300000;
	vector<ll> isPrime(LIM + 1, 1), p;
	isPrime[0] = isPrime[1] = 0;
	for(ll i=2; i*i<=LIM; i++){
		if(isPrime[i]){
			for(ll j=i*i; j<=LIM; j+=i) isPrime[j] = 0;
		}
	}
	for(ll i=2; i<=LIM; i++) if(isPrime[i]) p.push_back(i);
	tc{
		ll n; cin >> n;
		for(ll i=0; i<n; i++) cout << p[i] * p[i + 1] << " ";
		cout << endl;
	}
	return 0;
}
