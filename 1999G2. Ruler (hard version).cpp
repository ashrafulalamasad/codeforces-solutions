#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll ask(ll a, ll b){
	cout << "? " << a << " " << b << endl;
	cout.flush();
	ll res; 
	if(!(cin >> res)) exit(0);
	if(res==-1) exit(0);
	return res;
}

int main(){
	fast;
	tc{
		ll l=2, r=999;
		while(l<r){
			if(r-l+1<=2){
				ll a=l, b=r;
				ll res=ask(a,b);
				if(res==(a+1)*(b+1)){
					l=a, r=a;
				}else{
					l=b, r=b;
				}
				break;
			}
			ll a=l+(r-l)/3;
			ll b=l+2*(r-l)/3;
			ll res=ask(a,b);
			if(res==a*b){
				l=b+1;
			}else if(res==a*(b+1)){
				l=a+1;
				r=b;
			}else{
				r=a;
			}
		}
		cout << "! " << l << endl;
		cout.flush();
	}
	return 0;
}
