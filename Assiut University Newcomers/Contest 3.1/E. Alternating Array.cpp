#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	ll n; cin >> n; vector<ll> a(n);
	for(ll i = 0; i < n; i++) cin >> a[i];
	ll cnt1 = 0, cnt2 = 0;
    for(ll i = 0; i < n; i++){
        if((i % 2 == 0 && a[i] < 0) || (i % 2 == 1 && a[i] > 0)) cnt1++;
        if((i % 2 == 0 && a[i] > 0) || (i % 2 == 1 && a[i] < 0)) cnt2++;
    }
    cout << min(cnt1, cnt2) << endl;
	return 0;
}
