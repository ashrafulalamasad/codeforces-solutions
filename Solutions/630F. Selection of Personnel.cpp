#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    vector<ll> C(8, 0); C[0] = 1;
	for(ll i = 1; i <= n; i++){
		ll upto = min(i, 7LL);
		for(ll j = upto; j >= 1; j--){
			C[j] += C[j-1];
		}
	}
	ll result = C[5] + C[6] + C[7];
	cout << result << endl;
    return 0;
}
