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
		sort(a.begin(), a.end());
		ll answer = 0, left = 0;
		for(ll right = 0; right < n; right++){
			while(a[right] - a[left] > 2) left++;
			ll count = right - left;
			answer += count * (count - 1) / 2;
		}
		cout << answer << endl;
	}
	return 0;
}
