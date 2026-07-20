#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin >> t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n, q; cin >> n >> q;
		vector<vector<ll>> pre(1002, vector<ll>(1002, 0));
		for(ll i = 0; i < n; i++){
			ll h, w; cin >> h >> w;
			pre[h][w] += h * w;
		}
		for(ll i = 1; i <= 1000; i++){
			for(ll j = 1; j <= 1000; j++){
				pre[i][j] += pre[i - 1][j] + pre[i][j - 1] - pre[i - 1][j - 1];
			}
		}
		while(q--){
			ll hs, ws, hb, wb;
			cin >> hs >> ws >> hb >> wb;
			ll x1 = hs + 1, y1 = ws + 1;
			ll x2 = hb - 1, y2 = wb - 1;
			if(x1 > x2 || y1 > y2){
				cout << 0 << endl;
				continue;
			}
			ll ans = pre[x2][y2] - pre[x1 - 1][y2] - pre[x2][y1 - 1] + pre[x1 - 1][y1 - 1];
			cout << ans << endl;
		}
	}
	return 0;
}
