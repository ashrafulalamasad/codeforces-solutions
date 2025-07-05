#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n, px, py, qx, qy; cin >> n >> px >> py >> qx >> qy;
		vector<ll> a(n);
		ll S = 0;
		for(ll i = 0; i < n; i++){ cin >> a[i]; S += a[i]; }
		ll M = *max_element(a.begin(), a.end());
		ll dx = qx - px, dy = qy - py, D2 = dx * dx + dy * dy;
		ll mn = max(0LL, 2 * M - S), mn2 = mn * mn;
		ll S2 = S * S;
		if(mn2 <= D2 && D2 <= S2) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
}
