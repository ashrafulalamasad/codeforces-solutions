#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n, m; cin >> n >> m;
		string x, s; cin >> x >> s;
		ll ans = 0;
		if(x.find(s) != string::npos){
			cout << 0 << endl;
			continue;
		}
		while((ll)x.length() < m){
			x += x;
			ans++;
			if(x.find(s) != string::npos) break;
		}
		if(x.find(s) != string::npos){
			cout << ans << endl;
			continue;
		}
		x += x;
		ans++;
		if(x.find(s) != string::npos) cout << ans << endl;
		else cout << -1 << endl;
	}
	return 0;
}
