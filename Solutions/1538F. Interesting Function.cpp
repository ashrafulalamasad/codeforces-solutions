#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll l, r; cin >> l >> r;
		ll answer = r - l;
		for(ll power = 10; power <= r; power *= 10){
			answer += r / power - l / power;
		}
		cout << answer << endl;
	}
	return 0;
}
