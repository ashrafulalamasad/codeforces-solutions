#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n; cin >> n; vector<ll>a(n + 1), b(n + 1);
		for(ll i = 1; i <= n; i++) cin >> a[i];
		for(ll i = 1; i <= n; i++) cin >> b[i];
		vector<pair<ll,ll>>ops;
		auto op1 = [&](ll i){
			swap(a[i], a[i + 1]);
			ops.push_back({1, i});
		};
		auto op2 = [&](ll i){
			swap(b[i], b[i + 1]);
			ops.push_back({2, i});
		};
		auto op3 = [&](ll i){
			swap(a[i], b[i]);
			ops.push_back({3, i});
		};
		for(ll i = 1; i <= n; i++){
			ll odd = 2 * i - 1, pos = -1, row = -1;
			for(ll j = i; j <= n; j++) if(a[j] == odd){ pos = j; row = 1; break; }
			if(pos == -1){
				for(ll j = i; j <= n; j++) if(b[j] == odd){ pos = j; row = 2; break; }
			}
			if(row == 1){
				while(pos > i){
					op1(pos - 1);
					pos--;
				}
			}else{
				while(pos > i){
					op2(pos - 1);
					pos--;
				}
				op3(i);
			}
			ll even = 2 * i;
			pos = -1; row = -1;
			for(ll j = i; j <= n; j++) if(b[j] == even){ pos = j; row = 2; break; }
			if(pos == -1){
				for(ll j = i; j <= n; j++) if(a[j] == even){ pos = j; row = 1; break; }
			}
			if(row == 1) op3(pos);
			for(ll j = i; j <= n; j++) if(b[j] == even){ pos = j; break; }
			while(pos > i){
				op2(pos - 1);
				pos--;
			}
		}
		cout << ops.size() << endl;
		for(auto p : ops) cout << p.first << ' ' << p.second << endl;
	}
	return 0;
}
