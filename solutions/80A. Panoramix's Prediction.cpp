#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool isPrime(ll x){
	if(x < 2) return false;
	for(ll i = 2; i * i <= x; i++){
		if(x % i == 0) return false;
	}
	return true;
}

int main()
{
	fast;
	ll n, m; cin >> n >> m;
	ll nxt = n + 1;
	while(!isPrime(nxt)) nxt++;
	if(nxt == m) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
