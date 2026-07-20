#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin >> t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool isPrime(ll n){
	if(n < 2) return false;
	if(n == 2) return true;
	if(n % 2 == 0) return false;
	for(ll i = 3; i * i <= n; i += 2){
		if(n % i == 0) return false;
	}
	return true;
}

int main()
{
	fast;
	tc{
		ll n; cin >> n;
		if(n == 1){
			cout << "FastestFinger" << endl;
			continue;
		}
		if(n % 2){
			cout << "Ashishgup" << endl;
			continue;
		}
		ll cnt = 0, temp = n;
		while(temp % 2 == 0){
			cnt++;
			temp /= 2;
		}
		if(temp == 1){
			if(cnt >= 2) cout << "FastestFinger" << endl;
			else cout << "Ashishgup" << endl;
		}else{
			if(cnt == 1 && isPrime(temp)) cout << "FastestFinger" << endl;
			else cout << "Ashishgup" << endl;
		}
	}
	return 0;
}
