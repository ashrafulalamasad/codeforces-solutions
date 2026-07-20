#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n; cin >> n; string x; cin >> x;
		string a(n,'0'), b(n,'0');
		bool broken = false;
		for(ll i=0; i<n; i++){
			if(!broken){
				if(x[i]=='0'){
					a[i] = '0';
					b[i] = '0';
				}else if(x[i]=='2'){
					a[i] = '1';
					b[i] = '1';
				}else{
					a[i] = '1';
					b[i] = '0';
					broken = true;
				}
			}else{
				if(x[i]=='0'){
					a[i] = '0';
					b[i] = '0';
				}else if(x[i]=='1'){
					a[i] = '0';
					b[i] = '1';
				}else{
					a[i] = '0';
					b[i] = '2';
				}
			}
		}
		cout << a << endl << b << endl;
	}
	return 0;
}
