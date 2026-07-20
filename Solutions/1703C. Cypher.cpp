#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n; cin >> n; vector<ll>a(n);
		for(ll i = 0; i < n; i++) cin >> a[i];
		for(ll i = 0; i < n; i++){
			ll b; string s; cin >> b >> s;
			for(ll j = 0; j < b; j++){
				if(s[j] == 'U') a[i] = (a[i] + 9) % 10;
				else a[i] = (a[i] + 1) % 10;
			}
		}
		for(ll i = 0; i < n; i++) cout << a[i] << " ";
		cout << endl;
	}
	return 0;
}
