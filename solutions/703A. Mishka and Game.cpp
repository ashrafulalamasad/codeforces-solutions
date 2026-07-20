#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
	ll m = 0, c = 0;
	for(ll i = 0; i < n; i++){
		ll mi, ci; cin >> mi >> ci;
		if(mi > ci) m++;
		else if(mi < ci) c++;
	}
	if(m > c) cout << "Mishka" << endl;
	else if(m < c) cout << "Chris" << endl;
	else cout << "Friendship is magic!^^" << endl;
    return 0;
}
