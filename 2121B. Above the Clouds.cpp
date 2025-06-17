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
        vector<ll> freq(26, 0);
        for(char c : s) freq[c - 'a']++;
        bool ok = false;
        for(ll i = 1; i <= n - 2; i++){
            if(freq[s[i] - 'a'] >= 2){
                ok = true;
                break;
            }
        }
        cout << (ok ? "Yes" : "No");
        if(t) cout << endl;
	}
	return 0;
}
