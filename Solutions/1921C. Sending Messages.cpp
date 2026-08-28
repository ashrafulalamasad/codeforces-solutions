#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n, f, a, b; cin >> n >> f >> a >> b;
		ll total = 0, prev = 0;
		for(ll i = 0; i < n; i++){
			ll m; cin >> m;
			total += min((m - prev) * a, b);
			prev = m;
		}
		if(total < f){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
	return 0;
}
