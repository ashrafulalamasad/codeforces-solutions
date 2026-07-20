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
		vector<ll> b(n - 2);
		for(ll i = 0; i < n - 2; i++) cin >> b[i];
		bool ok = true;
		for(ll i = 0; i + 2 < n - 2; i++)
			if(b[i] == 1 && b[i + 1] == 0 && b[i + 2] == 1) ok = false;
		cout << (ok ? "YES" : "NO") << endl;
	}
	return 0;
}
