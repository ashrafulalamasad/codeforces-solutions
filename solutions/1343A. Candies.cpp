#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin >> t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n; cin >> n;
		for(ll k = 2; k <= 31; k++){
			ll sum = (1LL << k) - 1;
			if(n % sum == 0){
				cout << n / sum << endl;
				break;
			}
		}
	}
	return 0;
}
