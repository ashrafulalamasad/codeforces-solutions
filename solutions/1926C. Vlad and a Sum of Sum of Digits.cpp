#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin >> t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll sumdigit(ll x){
	ll s = 0;
	while(x){
		s += x % 10;
		x /= 10;
	}
	return s;
}

int main(){
	fast;
	const ll N = 200000;
	vector<ll> pre(N + 1, 0);
	for(ll i = 1; i <= N; i++) pre[i] = pre[i - 1] + sumdigit(i);
	tc{
		ll n; cin >> n;
		cout << pre[n] << endl;
	}
	return 0;
}
