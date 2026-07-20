#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n; cin >> n; vector<ll> p(n);
		for(ll i = 0; i < n; i++) cin >> p[i];
		vector<bool> vis(n + 1, 0);
		for(ll i = 0; i < n; i++){
			if(p[i]) vis[p[i]] = 1;
		}
		ll curr = n;
		for(ll i = 0; i < n; i++){
			if(!p[i]){
				while(vis[curr]) curr--;
				p[i] = curr--;
			}
		}
		ll l = -1, r = -1;
		for(ll i = 0; i < n; i++){
			if(p[i] != i + 1){
				if(l == -1) l = i;
				r = i;
			}
		}
		cout << (l == -1 ? 0 : r - l + 1) << endl;
	}
	return 0;
}
