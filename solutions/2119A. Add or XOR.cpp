#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll a, b, x, y; cin >> a >> b >> x >> y;
		if(b < a){
			if(a % 2 == 1 && b == a - 1) cout << y << endl;
			else cout << -1 << endl;
			continue;
		}
		ll m = b - a, ans = m * x;
		if(y < x && m > 0){
			ll pairs = m / 2;
			ll cost_pairs = pairs * (x + y);
			if(m % 2 == 0){
				ans = min(ans, cost_pairs);
			}else{
				ll c1 = cost_pairs + x, c2 = LLONG_MAX;
				if(b % 2 == 1) c2 = cost_pairs + y;
				ans = min({ans, c1, c2});
			}
		}
		cout << ans << endl;
	}
	return 0;
}
