#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll x; cin >> x; string answer;
		for(ll digit = 9; digit >= 1 && x > 0; digit--){
			if(x >= digit){
				answer += char('0' + digit);
				x -= digit;
			}
		}
		if(x > 0) cout << -1 << endl;
		else{
			reverse(answer.begin(), answer.end());
			cout << answer << endl;
		}
	}
	return 0;
}
