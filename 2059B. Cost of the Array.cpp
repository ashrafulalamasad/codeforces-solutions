#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n, k; cin >> n >> k;
		vector<ll> a(n + 1);
		for(ll i = 1; i <= n; i++) cin >> a[i];
		ll m = k / 2;
		bool earlyBreak = false;
		for(ll j = 2; j <= n - k + 2; j++){
			if(a[j] != 1){
				earlyBreak = true;
				break;
			}
		}
		if(earlyBreak){
			cout << 1 << endl;
			continue;
		}
		bool breakAtTwo = false;
		for(ll j = 2; j <= n - k + 1; j++){
			if(a[j] == 1 && j + 1 <= n - k + 2 && a[j + 1] != 2){
				breakAtTwo = true;
				break;
			}
		}
		for(ll j = 2; j <= n - k + 2 && !breakAtTwo; j++){
			if(a[j] == 1){
				ll L = j + 2, R = n - k + 4;
				for(ll pos = L; pos <= min(R, n); pos++){
					if(a[pos] != 2){
						breakAtTwo = true;
						break;
					}
				}
			}
		}
		if(breakAtTwo){
			cout << 2 << endl;
			continue;
		}
		cout << m + 1 << endl;
	}
	return 0;
}
