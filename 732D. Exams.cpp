#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll multTestQ;cin>>multTestQ;while(multTestQ--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	ll n, m; cin >> n >> m; vector<ll> d(n + 1), a(m + 1);
	for(ll i=1; i<=n; i++) cin >> d[i];
	for(ll i=1; i<=m; i++) cin >> a[i];
	auto ok = [&](ll mid)->bool{
		vector<ll> last(m + 1, 0);
		for(ll i=1; i<=mid; i++) if(d[i] != 0) last[d[i]] = i;
		for(ll i=1; i<=m; i++) if(last[i] == 0) return false;
		vector<ll> exam(mid + 1, 0);
		for(ll i=1; i<=m; i++) exam[last[i]] = i;
		ll prep = 0;
		for(ll i=1; i<=mid; i++){
			if(exam[i] == 0) prep++;
			else{
				ll need = a[exam[i]];
				if(prep < need) return false;
				prep -= need;
			}
		}
		return true;
	};
	if(!ok(n)){
		cout << -1 << endl;
		return 0;
	}
	ll l = 1, r = n, ans = n;
	while(l <= r){
		ll mid = (l + r) / 2;
		if(ok(mid)){
			ans = mid;
			r = mid - 1;
		}else l = mid + 1;
	}
	cout << ans << endl;
	return 0;
}
