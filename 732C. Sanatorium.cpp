#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll multTestQ;cin>>multTestQ;while(multTestQ--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	ll b, d, s; cin >> b >> d >> s;
	ll mx = max(b, max(d, s));
	ll ans = 0;
	if(mx > 0){
		ans += max(0LL, mx - 1 - b);
		ans += max(0LL, mx - 1 - d);
		ans += max(0LL, mx - 1 - s);
	}
	cout << ans << endl;
	return 0;
}
