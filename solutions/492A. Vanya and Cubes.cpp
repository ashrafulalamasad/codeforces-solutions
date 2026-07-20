#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	ll n; cin >> n;
	ll total = 0, h = 0;
	for(ll i = 1; ; i++){
		ll level = i * (i + 1) / 2;
		if(total + level <= n){
			total += level;
			h = i;
		}else{
			break;
		}
	}
	cout << h << endl;
	return 0;
}
