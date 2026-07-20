#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin >> t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n, a = 0, b = 0; cin >> n;
		while(n % 2 == 0){
			a++;
			n /= 2;
		}
		while(n % 3 == 0){
			b++;
			n /= 3;
		}
		if(n != 1 || a > b){
			cout << -1 << endl;
		}else{
			cout << 2 * b - a << endl;
		}
	}
	return 0;
}
