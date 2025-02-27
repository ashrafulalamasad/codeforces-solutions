#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n, x, k; string s; cin >> n >> x >> k >> s;
		vector<ll> pre(n + 1, 0);
		for(ll i = 0; i < n; i++)
			pre[i + 1] = pre[i] + (s[i] == 'R' ? 1 : -1);
		ll firstTime = 0;
		bool hit = false;
		for(ll i = 1; i <= n; i++){
			if(x + pre[i] == 0){
				firstTime = i; hit = true; break;
			}
		}
		if(!hit || firstTime > k){ cout << 0 << endl; continue; }
		ll ans = 1, rem = k - firstTime, T0 = -1;
		for(ll i = 1; i <= n; i++){
			if(pre[i] == 0){ T0 = i; break; }
		}
		if(T0 != -1) ans += rem / T0;
		cout << ans << endl;
	}
	return 0;
}
