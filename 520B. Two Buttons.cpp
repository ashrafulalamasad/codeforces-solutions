#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
	fast;
	ll n, m; cin >> n >> m;
	ll ans = 0;
	while(m > n){
		if(m % 2 == 0){
			m /= 2;
			ans++;
		} else {
			m++;
			ans++;
		}
	}
	ans += (n - m);
	cout << ans << endl;
	return 0;
}
