#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	ll n; cin >> n;
	string ans; ans.reserve(n);
	ll diff = 0;
	for(ll i=0; i<n; i++){
		ll a, g; cin >> a >> g;
		if(diff + a <= 500){
			ans.push_back('A');
			diff += a;
		}else{
			ans.push_back('G');
			diff -= g;
		}
	}
	cout << ans << endl;
	return 0;
}
