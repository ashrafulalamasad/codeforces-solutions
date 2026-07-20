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
		string a, b; cin >> a >> b;
		for(ll i = 0; i < n; i++){
			if(a[i] == 'G') a[i] = 'B';
			if(b[i] == 'G') b[i] = 'B';
		}
		if(a == b) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
