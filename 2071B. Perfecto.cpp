#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool isSquare(ll x){
	ll r = sqrtl(x);
	return r * r == x;
}

int main()
{
	fast;
	tc{
		ll n; cin >> n;
		ll total = n * (n + 1) / 2;
		if(isSquare(total) || n == 1){ cout << -1 << endl; continue; }
		vector<ll> ans;
		ans.push_back(2); ans.push_back(1);
		ll s = 3, i = 3;
		while(i <= n){
			if(isSquare(s + i)){
				ans.push_back(i + 1);
				s += i + 1;
				ans.push_back(i);
				s += i;
				i += 2;
			} else {
				ans.push_back(i);
				s += i;
				i++;
			}
		}
		for(ll x : ans) cout << x << " ";
		cout << endl;
	}
	return 0;
}
