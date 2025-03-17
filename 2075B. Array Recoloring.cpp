#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k; vector<ll>a(n);
		ll mxmid = -1;
		for(ll p = 0; p < n; p ++){
			cin >> a[p];
			if(k > 1) continue;
			if(p > 0 && p + 1 < n){
				mxmid = max (mxmid, a[p]);
			}
		}
		if(k == 1 && n > 2){
			ll left = a[0] + mxmid;
			ll right = mxmid + a.back();
			ll both = a[0] + a.back();
			ll res = max(left, right);
			res = max(res, both);
			cout << res << endl;
			continue;
		}
		sort (a.rbegin(), a.rend());
		ll total = 0;
		for(ll p = 0; p < n && p < k + 1; p ++){
			total += a[p];
		}
		cout << total << endl;
    }
    return 0;
}
