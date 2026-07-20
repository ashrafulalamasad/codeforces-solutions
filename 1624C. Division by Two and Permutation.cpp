#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t; cin >> t; while(t--)
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){
	fast;
	tc{
		ll n; cin >> n; vector<ll>a(n);
		for(ll i = 0; i < n; i++)cin >> a[i];
		vector<ll>vis(n + 1,0);
		for(ll i = 0; i < n; i++){
			while(a[i] > n)a[i] /= 2;
			while(a[i] > 0 && vis[a[i]])a[i] /= 2;
			if(a[i] > 0)vis[a[i]] = 1;
		}
		bool ok = 1;
		for(ll i = 1; i <= n; i++){
			if(!vis[i])ok = 0;
		}
		if(ok)cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
