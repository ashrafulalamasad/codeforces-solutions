#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m; cin >> n >> m;
        ll pm = 0, ps = 0, ans = 0;
        for(ll i = 0; i < n; i++){
            ll minute, side; cin >> minute >> side;
            ll duration = minute - pm;
            ans += duration;
            if(duration % 2 != abs(side - ps)) ans--;
            pm = minute;
            ps = side;
        }
        ans += m - pm;
        cout << ans << endl;
    }
    return 0;
}
