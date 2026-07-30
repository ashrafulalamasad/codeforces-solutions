#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool reach(ll n){
	if(n == 1) return true;
	if(n < 1) return false;
	if(n % 10 == 0 && reach(n / 10)) return true;
	if(n % 20 == 0 && reach(n / 20)) return true;
	return false;
}

int main()
{
	fast;
	tc{
		ll n; cin >> n;
		cout << (reach(n) ? "YES" : "NO") << endl;
	}
	return 0;
}
