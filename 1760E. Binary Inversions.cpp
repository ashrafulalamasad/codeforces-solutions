#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n; cin >> n; vector<ll> a(n);
		ll inv = 0, ones = 0;
		for(ll i=0; i<n; i++){
			cin >> a[i];
			if(a[i] == 1) ones++;
			else inv += ones;
		}
		ll ans = inv, pre_one = 0;
		for(ll i=0; i<n; i++){
			if(a[i] == 1){
				ll zero_right = (n - i - 1) - (ones - pre_one - 1);
				ans = max(ans, inv + pre_one - zero_right);
				pre_one++;
			}else{
				ll zero_right = (n - i - 1) - (ones - pre_one);
				ans = max(ans, inv + zero_right - pre_one);
			}
		}
		cout << ans << endl;
	}
	return 0;
}
