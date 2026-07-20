#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n, m; cin >> n >> m;
		ll a = 1, b = 2;
		for(ll i = 3; i <= n + 1; i++){
			ll c = a + b;
			a = b; b = c;
		}
		string s(m, '0');
		for(ll i = 0; i < m; i++){
			ll w, l, h; cin >> w >> l >> h;
			ll mx = max({w, l, h});
			s[i] += (w >= a && l >= a && h >= a && mx >= b);
		}
		cout << s << endl;
	}
	return 0;
}
