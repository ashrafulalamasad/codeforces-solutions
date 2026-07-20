#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	ll x; cin >> x;
	ll a = ((-x) % 360 + 360) % 360;
	ll bestK = 0;
	ll bestDev = LLONG_MAX;
	for(ll k=0; k<4; k++){
		ll rotated = (a + 90*k) % 360;
		ll dev = min(rotated, 360 - rotated);
		if(dev < bestDev){
			bestDev = dev;
			bestK = k;
		}
	}
	cout << bestK << '\n';
	return 0;
}
