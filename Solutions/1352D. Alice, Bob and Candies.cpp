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
		ll l = 0, r = n-1;
		ll alice = 0, bob = 0;
		ll last = 0, moves = 0;
		while(l <= r){
			moves++;
			ll cur = 0;
			if(moves % 2 == 1){
				while(l <= r && cur <= last){
					cur += a[l++];
				}
				alice += cur;
			}else{
				while(l <= r && cur <= last){
					cur += a[r--];
				}
				bob += cur;
			}
			last = cur;
		}
		cout << moves << " " << alice << " " << bob << endl;
	}
	return 0;
}
