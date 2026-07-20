#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t; cin >> t; while(t--)
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){
	fast;
	tc{
		ll n, k; string s; cin >> n >> k >> s;
		vector<ll>cnt(26,0);
		for(ll i = 0; i < n; i++)cnt[s[i] - 'a']++;
		ll pairs = 0;
		for(ll i = 0; i < 26; i++)pairs += cnt[i] / 2;
		ll ans = (pairs / k) * 2;
		ll rem = n - ans * k;
		if(rem >= k)ans++;
		cout << ans << endl;
	}
	return 0;
}
