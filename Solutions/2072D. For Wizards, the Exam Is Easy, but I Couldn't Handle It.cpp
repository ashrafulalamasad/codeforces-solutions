#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a ( n + 1 );
		for( ll i = 1; i <= n; i ++ ) cin >> a[i];
		ll best_l = 1, best_r = 1;
		ll best_delta = 0;
		for(ll l = 1; l <= n; l ++){
			ll delta = 0;
			for(ll r = l + 1; r <= n; r ++){
				if(a[r] > a[l]) delta ++;
				else if(a[r] < a[l]) delta --;
				if(delta < best_delta){
					best_delta = delta;
					best_l = l;
					best_r = r;
				}
			}
		}
		cout << best_l << " " << best_r << endl;
    }
    return 0;
}
