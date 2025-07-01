#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll len, step; string str; cin >> len >> step >> str;
		ll oneCount = count(str.begin(), str.end(), '1');
		if(oneCount <= step){ cout << "Alice" << endl; continue; }
		bool has_all_zero = false;
		ll window = 0, L = 0;
		for(ll R = 0; R < len; R++){
			if(str[R] == '0') window++;
			if(R - L + 1 > step){
				if(str[L] == '0') window--;
				L++;
			}
			if(R - L + 1 == step && window == step){
				has_all_zero = true;
				break;
			}
		}
		cout << (has_all_zero || 2 * step <= len ? "Bob" : "Alice") << endl;
	}
	return 0;
}
