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
        ll ca = 0, cb = 0, cc = 0, cd = 0;
        for(ll i = 0; i < 4 * n; i++){
            if(s[i] == 'A') ca++;
            else if(s[i] == 'B') cb++;
            else if(s[i] == 'C') cc++;
            else if(s[i] == 'D') cd++;
        }
        ll ans = min(ca, n) + min(cb, n) + min(cc, n) + min(cd, n);
        cout << ans << endl;
    }
    return 0;
}
