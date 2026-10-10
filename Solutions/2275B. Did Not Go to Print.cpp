#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n; string s; cin >> n >> s;
		vector<ll> memory;
		vector<bool> printed(n + 1, false);
		for(ll i = 1; i <= n; i++){
			if(s[i - 1] == '1') memory.push_back(i);
			else if(s[i - 1] == '2'){
				if(memory.empty()) printed[i] = true;
				else{
					printed[memory.back()] = true;
					memory.pop_back();
				}
			}else printed[i] = true;
		}
		ll count = 0;
		for(ll i = 1; i <= n; i++) if(!printed[i]) count++;
		cout << count << endl;
		for(ll i = 1; i <= n; i++) if(!printed[i]) cout << i << " ";
		cout << endl;
	}
	return 0;
}
