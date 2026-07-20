#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n; cin >> n; vector<ll> a(n+1);
		for(ll i=1; i<=n; i++) cin >> a[i];
		vector<ll> pref(n+1, 0);
		for(ll i=1; i<=n; i++) pref[i] = pref[i-1] + (a[i] < i);
		ll ans = 0;
		for(ll j=1; j<=n; j++){
			if(a[j] < j){
				ll upto = a[j] - 1;
				if(upto < 0) upto = 0;
				if(upto > n) upto = n;
				ans += pref[(int)upto];
			}
		}
		cout << ans << endl;
	}
	return 0;
}
