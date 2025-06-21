#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll poket(ll x, ll dx, ll s){
	if(dx == 1) return s - x;
	else return x;
}

int main()
{
	fast;
	tc{
		ll n, s, cnt = 0; cin >> n >> s;
		for(ll i = 0; i < n; i++){
			ll dx, dy, x, y; cin >> dx >> dy >> x >> y;
			if(poket(x, dx, s) == poket(y, dy, s)) cnt++;
		}
		cout << cnt << endl;
	}
	return 0;
}
