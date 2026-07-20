#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
	fast;
	ll x, y, z, x1, y1, z1; cin >> x >> y >> z >> x1 >> y1 >> z1;
	ll a1, a2, a3, a4, a5, a6; cin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6;
	ll sum = 0;
	if(x < 0) sum += a5;
	else if(x > x1) sum += a6;
	if(y < 0) sum += a1;
	else if(y > y1) sum += a2;
	if(z < 0) sum += a3;
	else if(z > z1) sum += a4;
	cout << sum << endl;
	return 0;
}
