#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n; cin >> n; vector<ll> a(n), b(n);
		for(ll i = 0; i < n; i++) cin >> a[i];
		for(ll i = 0; i < n; i++) cin >> b[i];
		ll bad = -1;
		bool ok = true;
		for(ll i = 0; i < n; i++){
			if(b[i] > a[i]){
				if(bad != -1){ ok = false; break; }
				bad = i;
			}
		}
		if(!ok || bad == -1){
			cout << (ok ? "YES" : "NO") << endl;
			continue;
		}
		ll need = b[bad] - a[bad];
		for(ll i = 0; i < n; i++){
			if(i == bad) continue;
			if(a[i] - b[i] < need){ ok = false; break; }
		}
		cout << (ok ? "YES" : "NO") << endl;
	}
	return 0;
}
