#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
	fast;
	tc{
		ll n; cin >> n; vector<ll> a(n);
		for(ll i=0;i<n;i++) cin >> a[i];
		ll ev = 0;
		for(auto x: a) if(x%2==0) ev++;
		if(ev%2==0) cout << "YES" << endl;
		else{
			sort(a.begin(), a.end());
			bool ok = false;
			for(ll i=1;i<n;i++) if(abs(a[i]-a[i-1])==1){ ok = true; break; }
			if(ok) cout << "YES" << endl; else cout << "NO" << endl;
		}
	}
	return 0;
}
