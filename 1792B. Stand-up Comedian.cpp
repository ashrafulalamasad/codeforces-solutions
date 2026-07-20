#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll a1, a2, a3, a4; cin >> a1 >> a2 >> a3 >> a4;
        if(a1 == 0){
            cout << (a2 + a3 + a4 > 0 ? 1 : 0) << endl;
            continue;
        }
        ll ans = a1, mood = a1;
        ll pairs = min(a2, a3);
        ans += 2 * pairs;
        if(a2 > a3){
            ll rem = a2 - a3;
            ll can = min(rem, a1 + 1);
            ans += can;
            mood -= can;
        }else if(a3 > a2){
            ll rem = a3 - a2;
            ll can = min(rem, a1 + 1);
            ans += can;
            mood -= can;
        }
        if(mood >= 0) ans += min(a4, mood + 1);
        cout << ans << endl;
    }
    return 0;
}
