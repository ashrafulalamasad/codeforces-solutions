#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
	fast;
	ll n, q; cin >> n >> q; vector<vector<ll>> app(n+1);
	vector<ll> notif(q+5, 0); vector<char> vis(q+5, 0);
	ll unread = 0, cur = 0, tot = 0;
	for(ll i=0; i<q; i++){
		ll type; cin >> type;
		if(type == 1){
			ll x; cin >> x;
			++tot;
			notif[tot] = x;
			app[x].push_back(tot);
			unread++;
		}else if(type == 2){
			ll x; cin >> x;
			for(ll id: app[x]){
				if(!vis[id]){ vis[id] = 1; unread--; }
			}
			app[x].clear();
		}else{
			ll t; cin >> t;
			while(cur < t){
				++cur;
				if(!vis[cur]){ vis[cur] = 1; unread--; }
			}
		}
		cout << unread << endl;
	}
	return 0;
}
