#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll a, b; cin >> a >> b;
		if(a == 0){
			if(b == 0) cout << 0 << endl;
			else if(b == 1) cout << 1 << endl;
			else cout << -1 << endl;
		}else if(b <= a && (a - b) % 2 == 0){
            cout << a << endl;
		}else if(b <= a + 1 && (a - b) % 2 != 0){
            cout << a + 1 << endl;
		}else{
            cout << -1 << endl;
		}
	}
	return 0;
}
