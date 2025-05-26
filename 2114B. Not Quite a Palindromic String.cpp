#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n, k; string s; cin >> n >> k >> s;
		ll z = count(s.begin(), s.end(), '0');
		ll half = n / 2;
		ll low = half - k, high = half + k;
		if(k > half || z < low || z > high || ((z + k - half) & 1))
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}
	return 0;
}
