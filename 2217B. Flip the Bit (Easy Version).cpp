#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll need(vector<ll>&v){
	if(v.size()==0) return 0;
	ll ans=v.back();
	for(ll i=0; i+1<v.size(); i++){
		if(v[i]!=v[i+1]) ans++;
	}
	return ans;
}

int main()
{
	fast;
	tc{
		ll n, k; cin >> n >> k; vector<ll>a(n+1);
		for(ll i=1; i<=n; i++) cin >> a[i];
		ll p; cin >> p; ll x = a[p];
		vector<ll>left,right;
		for(ll i=p-1; i>=1; i--) left.push_back(a[i]^x);
		for(ll i=p+1; i<=n; i++) right.push_back(a[i]^x);
		ll L = need(left), R = need(right);
		ll ans = max(L,R);
		if(ans%2 == 1) ans++;
		cout << ans << endl;
	}
	return 0;
}
