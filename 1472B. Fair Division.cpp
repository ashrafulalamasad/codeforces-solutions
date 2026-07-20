#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){
	fast;
	tc{
		ll n; cin >> n;
		ll one = 0,two = 0;
		for(ll i=0; i<n; i++){
			ll x; cin >> x;
			if(x==1)one++;
			else two++;
		}
		ll sum = one+2*two;
		if(sum%2!=0)cout << "NO" << endl;
		else{
			sum/=2;
			if(sum%2==0||one>0)cout << "YES" << endl;
			else cout << "NO" <<endl;
		}
	}
    return 0;
}
