#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n, negative = 0; cin >> n;
		for(ll i = 0; i < n; i++){
			ll value; cin >> value;
			if(value == -1){
				negative++;
			}
		}
		ll operations = 0;
		if(negative % 2 == 1){
			negative--;
			operations++;
		}
		while(negative > n - negative){
			negative -= 2;
			operations += 2;
		}
		cout << operations << endl;
	}
	return 0;
}
