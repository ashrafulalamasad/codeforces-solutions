#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	ll n; cin >> n;
	ll l = 0, r = 2000000000, ans = 0;
	while(l <= r){
		ll mid = l + (r - l) / 2;
		ll sum = mid * (mid + 1) / 2;
		if(sum <= n){
			ans = mid;
			l = mid + 1;
		}else{
            r = mid - 1;
		}
	}
	cout << ans << endl;
	return 0;
}
