#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        string s, t; cin >> s >> t;
        if(t == "a") cout << 1 << endl;
        else if(t.find('a') != string::npos) cout << -1 << endl;
        else{
            ll ans = 1;
            for(ll i = 0; i < (ll)s.size(); i++) ans *= 2;
            cout << ans << endl;
        }
    }
    return 0;
}
