#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
	fast;
	tc{
		ll n; cin >> n; vector<ll> a(n);
		for(ll i=0; i<n; i++) cin >> a[i];
		vector<ll> b;
		for(ll i=0; i<n; i++)
			if(i==0 || a[i] != a[i-1]) b.push_back(a[i]);
		ll m = b.size(), cnt = 0;
		for(ll i=0; i<m; i++){
			if((i==0 || b[i] < b[i-1]) && (i==m-1 || b[i] < b[i+1]))
				cnt++;
		}
		cout << (cnt == 1 ? "YES" : "NO") << endl;
	}
	return 0;
}
