#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n; cin >> n;
		vector<ll> a(n);
		for(ll i = 0; i < n; i++) cin >> a[i];
		vector<ll> p(n + 1, 0);
		for(ll i = 1; i <= n; i++) p[i] = (p[i - 1] + a[i - 1]) % 3;
		bool found = false;
		for(ll l = 1; l <= n - 2 && !found; l++)
			for(ll r = l + 1; r <= n - 1 && !found; r++){
				ll s1 = p[l], s2 = (p[r] - p[l] + 3) % 3, s3 = (p[n] - p[r] + 3) % 3;
				if((s1 == s2 && s2 == s3) || (s1 != s2 && s1 != s3 && s2 != s3)){
					cout << l << " " << r << endl;
					found = true;
				}
			}
		if(!found) cout << "0 0" << endl;
	}
	return 0;
}
