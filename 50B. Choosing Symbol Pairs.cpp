#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	string s; cin >> s; vector<ll> cnt(128, 0);
	for(char c: s) cnt[(ll)c]++;
	ll ans = 0;
	for(ll i=0; i<128; i++) ans += cnt[i] * cnt[i];
	cout << ans << endl;
	return 0;
}
