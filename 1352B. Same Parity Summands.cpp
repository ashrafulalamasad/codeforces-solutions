#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n, k; cin >> n >> k;
		if(n >= k && (n % 2) == (k % 2)){
			cout << "YES" << endl;
			for(ll i=0; i<k-1; i++) cout << 1 << " ";
			cout << n - (k-1) << endl;
		}else if(n >= 2*k && n % 2 == 0){
			cout << "YES" << endl;
			for(ll i=0; i<k-1; i++) cout << 2 << " ";
			cout << n - 2*(k-1) << endl;
		}else{
			cout << "NO" << endl;
		}
	}
	return 0;
}
