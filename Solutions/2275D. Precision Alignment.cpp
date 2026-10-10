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
		vector<ll> sum(n), extra(n);
		ll low = LLONG_MAX, inf = LLONG_MAX / 4;
		for(ll i = 0; i < n; i++){
			ll a, b, c; cin >> a >> b >> c;
			sum[i] = a + b + c;
			low = min(low, sum[i]);
			if(a <= b && b <= c){
				if(a == c) extra[i] = -1;
				else{
					ll left = a < c ? b - a + 1 : inf;
					ll right = a < b ? c - b + 1 : inf;
					extra[i] = 2 * min(left, right);
				}
			}
		}
		auto possible = [&](ll target){
			ll remaining = k;
			for(ll i = 0; i < n; i++){
				if(target <= sum[i]) continue;
				if(extra[i] == -1) return false;
				ll need = target - sum[i] + extra[i];
				if(need > remaining) return false;
				remaining -= need;
			}
			return true;
		};
		ll high = low + k + 1;
		while(low + 1 < high){
			ll middle = low + (high - low) / 2;
			if(possible(middle)) low = middle;
			else high = middle;
		}
		cout << low << endl;
	}
	return 0;
}
