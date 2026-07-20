#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin >> t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n; cin >> n; vector<ll> odd, even;
		for(ll i = 1; i <= 2 * n; i++){
			ll x; cin >> x;
			if(x % 2) odd.push_back(i);
			else even.push_back(i);
		}
		if((ll)odd.size() % 2){
			odd.pop_back();
			even.pop_back();
		}else{
			if((ll)odd.size() >= 2){
				odd.pop_back();
				odd.pop_back();
			}else{
				even.pop_back();
				even.pop_back();
			}
		}
		for(ll i = 0; i + 1 < (ll)odd.size(); i += 2){
			cout << odd[i] << " " << odd[i + 1] << endl;
		}
		for(ll i = 0; i + 1 < (ll)even.size(); i += 2){
			cout << even[i] << " " << even[i + 1] << endl;
		}
	}
	return 0;
}
