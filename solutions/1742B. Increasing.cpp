#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n; cin >> n;
        vector<ll>a(n); set<ll>s;
		for(ll i = 0; i < n; i++){
			cin >> a[i];
			s.insert(a[i]);
		}
		if((ll)s.size() == n) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
