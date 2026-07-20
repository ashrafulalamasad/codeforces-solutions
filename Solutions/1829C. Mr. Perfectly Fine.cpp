#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n;
        ll min10 = INT_MAX, min01 = INT_MAX, min11 = INT_MAX;
        for(ll i=0; i<n; i++){
            ll m; string s; cin >> m >> s;
            if(s == "10") min10 = min(min10, m);
            else if(s == "01") min01 = min(min01, m);
            else if(s == "11") min11 = min(min11, m);
        }
        ll ans = min(min11, min10 + min01);
        if(ans >= INT_MAX) cout << -1 << endl;
        else cout << ans << endl;
    }
    return 0;
}
