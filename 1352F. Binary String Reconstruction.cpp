#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n0,n1,n2; cin >> n0 >> n1 >> n2;
		if(n1 == 0){
			if(n0 > 0) {
				for(ll i=0; i<n0+1; i++) cout << 0;
				cout << endl;
			}else{
				for(ll i=0; i<n2+1; i++) cout << 1;
				cout << endl;
			}
			continue;
		}
		ll k = n1 + 1;
		vector<char> seg(k);
		char start = (n2 > 0 ? '1' : '0');
		for(ll i=0; i<k; i++){
			if(i%2==0) seg[i] = start; else seg[i] = (start=='1' ? '0' : '1');
		}
		vector<ll> len(k, 1);
		for(ll i=0; i<k; i++){
			if(seg[i] == '0') { len[i] += n0; break; }
		}
		for(ll i=0; i<k; i++){
			if(seg[i] == '1') { len[i] += n2; break; }
		}
		for(ll i=0; i<k; i++){
			for(ll j=0; j<len[i]; j++) cout << seg[i];
		}
		cout << endl;
	}
	return 0;
}
