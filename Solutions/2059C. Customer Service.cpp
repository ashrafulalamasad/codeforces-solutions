#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n; cin >> n; vector<ll>c(n);
		for(ll i = 0; i < n; i++){
			vector<ll>a(n);
			for(ll j = 0; j < n; j++) cin >> a[j];
			ll cnt = 0;
			for(ll j = n - 1; j >= 0; j--){
				if(a[j] == 1) cnt++;
				else break;
			}
			c[i] = cnt;
		}
		sort(c.begin(), c.end());
		ll mex = 0;
		for(ll i = 0; i < n; i++) if(c[i] >= mex) mex++;
		cout << mex << endl;
	}
	return 0;
}
