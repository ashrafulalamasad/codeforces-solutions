#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
	fast;
	tc{
		ll n; cin >> n;
		ll sum = 0;
		for(int i=0; i<n; i++){
			ll x; cin >> x;
			sum += x;
		}
		ll r = sqrtl(sum);
		while((r+1)*(r+1) <= sum) r++;
		while(r*r > sum) r--;
		cout << (r*r == sum ? "YES" : "NO") << endl;
	}
	return 0;
}
