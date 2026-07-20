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
		for(ll i=0; i<n; i++) cin >> a[i];
		vector<ll> used(n, 0); vector<ll> res;
		ll cur = 0;
		for(ll it=0; it<31; it++){
			ll best_val = cur;
			ll best_idx = -1;
			for(ll j=0; j<n; j++){
				if(used[j]) continue;
				ll val = (cur | a[j]);
				if(val > best_val){ best_val = val; best_idx = j; }
			}
			if(best_idx == -1) break;
			used[best_idx] = 1;
			res.push_back(a[best_idx]);
			cur = best_val;
		}
		for(ll j=0; j<n; j++) if(!used[j]) res.push_back(a[j]);
		for(ll i=0; i<n; i++){
			cout << res[i];
			if(i+1<n) cout << " ";
		}
		cout << endl;
	}
	return 0;
}
