#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n, m; cin >> n >> m; vector<ll> a(m);
		for(ll i = 0; i < m; i++) cin >> a[i];
		sort(a.begin(), a.end(), [](ll x, ll y){
			return x / 100 < y / 100;
		});
		ll l = 0, r = m - 1;
		while(n >= 2){
			cout << a[r] << " " << a[l] << " " << a[r] << " " << a[l] << " " << a[r] << " " << a[l] << endl;
			cout << a[l] << " " << a[r] << " " << a[l] << " " << a[r] << " " << a[l] << " " << a[r] << endl;
			l++, r--;
			n -= 2;
		}
		if(n){
			if(l < r){
				cout << a[r] << " " << a[l] << " " << a[r] << " " << a[l] << " " << a[r] << " " << a[l] << endl;
            }else{
				for(ll i = 0; i < 6; i++) cout << a[l] << " \n"[i == 5];
            }
		}
	}
	return 0;
}
