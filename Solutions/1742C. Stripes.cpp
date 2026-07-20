#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		vector<string>g(8);
		for(ll i = 0; i < 8; i++) cin >> g[i];
		bool red = false;
		for(ll i = 0; i < 8; i++){
			bool ok = true;
			for(ll j = 0; j < 8; j++){
				if(g[i][j] != 'R'){
					ok = false;
					break;
				}
			}
			if(ok){
				red = true;
				break;
			}
		}
		if(red) cout << "R" << endl;
		else cout << "B" << endl;
	}
	return 0;
}
