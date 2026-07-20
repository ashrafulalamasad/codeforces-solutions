#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin >> t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
	fast;
	tc{
		ll n; string s; cin >> n >> s;
		bool ok = false;
		for(ll i = 0; i + 2 < n; i++){
			if(s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.') ok = true;
		}
		if(ok){
            cout << 2 << endl;
        }else{
			ll ans = 0;
			for(ll i = 0; i < n; i++) if(s[i] == '.') ans++;
			cout << ans << endl;
		}
	}
	return 0;
}
