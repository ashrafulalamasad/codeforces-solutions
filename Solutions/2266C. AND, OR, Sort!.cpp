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
        ll z = 0, o = 0;
        for(ll i = 0; i < n; i++) z += s[i] == '0';
        if(s[0] == '1') cout << z << endl;
        else{
            ll ans = n;
            for(ll i = 0; i < n; i++){
                o += s[i] == '1';
                z -= s[i] == '0';
                ans = min(ans, o + z);
            }
            cout << ans << endl;
        }
    }
    return 0;
}
