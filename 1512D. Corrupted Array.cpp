#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
	fast;
	tc{
		ll n, total = 0; cin >> n;
		ll m = n + 2; vector<ll> b(m);
		for(ll i=0; i<m; i++){
			cin >> b[i];
			total += b[i];
		}
		sort(b.begin(), b.end());
		bool found = false;
		ll x = b[m-1];
		if((total - x) % 2 == 0){
			ll S = (total - x) / 2;
			for(ll i=0; i<m-1; i++){
				if(b[i] == S){
					for(ll j=0; j<m-1; j++){
						if(j == i) continue;
						cout << b[j] << ' ';
					}
					cout << endl;
					found = true;
					break;
				}
			}
		}
		if(found) continue;
		ll S = b[m-1];
		x = total - 2 * S;
		if(x >= 1){
			for(ll i=0; i<m-1; i++){
				if(b[i] == x){
					for(ll j=0; j<m-1; j++){
						if(j == i) continue;
						cout << b[j] << ' ';
					}
					cout << endl;
					found = true;
					break;
				}
			}
		}
		if(!found) cout << -1 << endl;
	}
	return 0;
}
