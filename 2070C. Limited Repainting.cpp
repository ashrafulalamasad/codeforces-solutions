#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n, k, mx = 0; string s; cin >> n >> k >> s;
		vector<ll> a(n);
		for(ll i = 0; i < n; i++){
			cin >> a[i];
			mx = max(mx, a[i]);
		}
		auto check = [&](ll X) -> bool{
			ll ops = 0, i = 0;
			while(i < n){
				if(s[i] == 'R' && a[i] > X){ i++; continue; }
				ll j = i;
				bool need = false;
				while(j < n && !(s[j] == 'R' && a[j] > X)){
					if(s[j] == 'B' && a[j] > X) need = true;
					j++;
				}
				if(need) ops++;
				i = j;
			}
			return ops <= k;
		};
		ll L = 0, R = mx, ans = mx;
		while(L <= R){
			ll mid = (L + R) / 2;
			if(check(mid)){ ans = mid; R = mid - 1; }
			else L = mid + 1;
		}
		cout << ans << endl;
	}
	return 0;
}
