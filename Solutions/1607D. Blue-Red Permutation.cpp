#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n; cin >> n; vector<ll> a(n), blue, red;
		for(ll i = 0; i < n; i++) cin >> a[i];
		string colors; cin >> colors;
		for(ll i = 0; i < n; i++){
			if(colors[i] == 'B'){
				blue.push_back(a[i]);
			}else{
				red.push_back(a[i]);
			}
		}
		sort(blue.begin(), blue.end());
		sort(red.begin(), red.end());
		bool possible = true;
		for(ll i = 0; i < (ll)blue.size(); i++){
			if(blue[i] < i + 1){
				possible = false;
			}
		}
		for(ll i = 0; i < (ll)red.size(); i++){
			if(red[i] > (ll)blue.size() + i + 1){
				possible = false;
			}
		}

		cout << (possible ? "YES" : "NO") << endl;
	}
	return 0;
}
