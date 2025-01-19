#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll a1, a2, a4, a5; cin >> a1 >> a2 >> a4 >> a5;
		ll cand1 = a1 + a2;
		ll cand2 = a4 - a2;
		ll cand3 = a5 - a4;
		ll ans = 0;
		for(ll a3 : {cand1, cand2, cand3}){
			ll cnt = 0;
			if(a3 == a1 + a2) cnt++;
			if(a4 == a2 + a3) cnt++;
			if(a5 == a3 + a4) cnt++;
			ans = max(ans, cnt);
		}
		cout << ans << endl;
	}
	return 0;
}
