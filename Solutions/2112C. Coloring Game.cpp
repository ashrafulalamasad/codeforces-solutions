#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n; cin >> n; vector<ll>a(n);
		for(ll i = 0; i < n; i++) cin >> a[i];
		ll mx = a[n - 1], ans = 0;
		for(ll k = 2; k < n; k++){
			ll need = max(a[k], mx - a[k]);
			ll l = 0, r = k - 1;
			while(l < r){
				if(a[l] + a[r] > need){
					ans += r - l;
					r--;
				} else l++;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
