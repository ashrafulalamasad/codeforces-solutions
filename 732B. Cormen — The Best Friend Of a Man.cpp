#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll multTestQ;cin>>multTestQ;while(multTestQ--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	ll n, k; cin >> n >> k; vector<ll> a(n + 1), b(n + 1);
	for(ll i = 1; i <= n; i++) cin >> a[i];
	ll add = 0;
	b[1] = a[1];
	for(ll i = 2; i <= n; i++){
		b[i] = a[i];
		ll need = k - (b[i-1] + b[i]);
		if(need > 0){
			b[i] += need;
			add += need;
		}
	}
	cout << add << endl;
	for(ll i = 1; i <= n; i++) cout << b[i] << " ";
	cout << endl;
	return 0;
}
