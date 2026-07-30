#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

vector<ll> a;

ll suffixSum(ll idx, ll cnt){
	if(cnt == 0) return 0;
	return a[idx] + suffixSum(idx - 1, cnt - 1);
}

int main()
{
	fast;
	ll n, m; cin >> n >> m;
	a.resize(n);
	for(ll i = 0; i < n; i++) cin >> a[i];
	cout << suffixSum(n - 1, m) << endl;
	return 0;
}
