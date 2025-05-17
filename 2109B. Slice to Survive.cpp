#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll T(ll L, ll p){
	ll t = 0;
	while(L > 1){
		ll S = min(p, L - p + 1);
		L = S;
		p = (L + 1) / 2;
		t++;
	}
	return t;
}

ll M(ll L){
	ll t = 0;
	while(L > 1){
		L = (L + 1) / 2;
		t++;
	}
	return t;
}

int main()
{
	fast;
	tc{
		ll n, m, a, b; cin >> n >> m >> a >> b;
		cout << min(T(n, a) + M(m), T(m, b) + M(n)) << endl;
	}
	return 0;
}
