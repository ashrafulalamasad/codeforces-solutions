#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ull unsigned long long

int main()
{
	fast;
	tc{
		ull n, l, r, k; cin >> n >> l >> r >> k;
		if(n & 1) cout << l << endl;
		else if(n == 2) cout << -1 << endl;
		else{
			ll h = 63 - __builtin_clzll(l);
			ull x = 1ULL << (h + 1);
			if(x > r) cout << -1 << endl;
			else cout << (k <= n - 2 ? l : x) << endl;
		}
	}
	return 0;
}
