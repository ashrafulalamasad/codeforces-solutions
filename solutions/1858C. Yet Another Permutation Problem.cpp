#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin >> t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n; cin >> n; vector<ll> ans; vector<ll> vis(n + 1, 0);
		for(ll i = 1; i <= n; i++){
			if(vis[i]) continue;
			ll x = i;
			while(x <= n){
				if(!vis[x]){
					vis[x] = 1;
					ans.push_back(x);
				}
				x *= 2;
			}
		}
		for(ll x : ans) cout << x << " ";
		cout << endl;
	}
	return 0;
}
