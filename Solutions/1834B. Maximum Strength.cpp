#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		string l, r; cin >> l >> r;
		while(l.size() < r.size()){
			l = "0" + l;
		}
		ll answer = 0;
		for(ll i = 0; i < r.size(); i++){
			if(l[i] != r[i]){
				answer += abs(l[i] - r[i]);
				answer += 9 * (r.size() - i - 1);
				break;
			}
		}
		cout << answer << endl;
	}
	return 0;
}
