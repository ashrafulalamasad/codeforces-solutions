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
		sort(a.rbegin(),a.rend());
		ll alice = 0, bob = 0;
		for(ll i = 0; i < n; i++){
			if(i % 2 == 0){
				if(a[i] % 2 == 0) alice += a[i];
			}else{
				if(a[i] % 2 == 1) bob += a[i];
			}
		}
		if(alice > bob) cout << "Alice" << endl;
		else if(bob > alice) cout << "Bob" << endl;
		else cout << "Tie" << endl;
    }
    return 0;
}
