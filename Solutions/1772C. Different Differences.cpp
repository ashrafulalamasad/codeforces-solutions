#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
	fast;
	tc{
		ll k, n, x = 1, d = 1; cin >> k >> n; vector<ll>a;
		a.push_back(x);
		for(ll i = 2; i <= k; i++){
			ll rem = k-i;
			if(x+d+rem <= n){
				x+=d;
				d++;
			}
			else x++;
			a.push_back(x);
		}
		for(ll i = 0; i < k; i++){
			if(i)cout << " ";
			cout << a[i];
		}
		cout << endl;
	}
	return 0;
}
