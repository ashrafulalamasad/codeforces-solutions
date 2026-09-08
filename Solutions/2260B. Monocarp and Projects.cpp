#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll x, y, k; cin >> x >> y >> k;
		ll difference = y - x, answer = 0;
		while(k > 0 && x <= difference){
			answer += difference % x;
			x++;
			k--;
		}
		answer += k * difference;
		cout << answer << endl;
	}
	return 0;
}
