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
		for(ll i=0; i<n; i++) cin >> a[i];
		map<ll, ll> cnt;
		for(ll i=0; i<n; i++){
			ll x = a[i];
			for(ll p=2; p*p<=x; p++){
				while(x%p==0){
					cnt[p]++;
					x/=p;
				}
			}
			if(x>1) cnt[x]++;
		}
		bool ok = true;
		for(auto it: cnt){
			if(it.second%n!=0){
				ok = false;
				break;
			}
		}
		if(ok) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
