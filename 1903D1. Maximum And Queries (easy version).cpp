#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll min_y(ll a, ll mask){
	ll y=a;
	for(ll b=0; b<=60; b++){
		if((mask>>b)&1){
			if(((y>>b)&1)==0){
				ll lowmask=(1LL<<b)-1;
				ll add=(1LL<<b)-(y&lowmask);
				y+=add;
				y|=(mask&lowmask);
			}
		}
	}
	return y;
}

int main(){
	fast;
	ll n, q; cin >> n >> q; vector<ll> a(n);
	for(ll i=0; i<n; i++) cin >> a[i];
	while(q--){
		ll k; cin >> k;
		ll ans=0;
		for(ll b=60; b>=0; b--){
			ll cand=ans|(1LL<<b);
			ll need=0;
			for(ll i=0; i<n; i++){
				ll y=min_y(a[i], cand);
				ll add=y-a[i];
				if(need>k-add){
					need=k+1;
					break;
				}
				need+=add;
			}
			if(need<=k) ans=cand;
		}
		cout << ans << endl;
	}
	return 0;
}
