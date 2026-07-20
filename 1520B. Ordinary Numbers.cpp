#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t; cin >> t; while(t--)
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
	fast;
	tc{
		ll n, ans = 0; cin >> n;
		string s = to_string(n);
		ll len = (ll)s.length();
		ans = (len - 1) * 9;
		for(ll d = 1; d <= 9; d++){
			string t(len, char('0' + d));
			if(stoll(t) <= n) ans++;
		}
		cout << ans << endl;
	}
    return 0;
}
