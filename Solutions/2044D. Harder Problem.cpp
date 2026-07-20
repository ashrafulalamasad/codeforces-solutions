#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n; cin >> n; vector<ll>a(n), b(n);
		for(ll i = 0; i < n; i++) cin >> a[i];
		set<ll>st;
		for(ll x = 1; x <= n; x++) st.insert(x);
		for(ll i = 0; i < n; i++){
			if(st.find(a[i]) != st.end()){
				b[i] = a[i];
				st.erase(a[i]);
			}else{
				b[i] = *st.begin();
				st.erase(st.begin());
			}
		}
		for(ll i = 0; i < n; i++){
			if(i) cout << ' ';
			cout << b[i];
		}
		cout << endl;
	}
	return 0;
}
