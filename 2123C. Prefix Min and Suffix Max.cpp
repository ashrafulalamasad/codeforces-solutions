#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n; cin >> n; vector<ll> a(n);
		for(ll i = 0; i < n; i++) cin >> a[i];
		vector<char> ans(n, '0');
		ll mn = INT_MAX, mx = INT_MIN;
		for(ll i = 0; i < n; i++){
			if(a[i] < mn){ mn = a[i]; ans[i] = '1'; }
		}
		for(ll i = n - 1; i >= 0; i--){
			if(a[i] > mx){ mx = a[i]; ans[i] = '1'; }
		}
		for(char c : ans) cout << c;
		cout << endl;
	}
	return 0;
}
