#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll a, b, c, ans = 0; cin >> a >> b >> c;
        for(ll first = 0; first <= 5; first++){
            for(ll second = 0; second <= 5 - first; second++){
                ll third = 5 - first - second;
                ans = max(ans, (a + first) * (b + second) * (c + third));
            }
        }
        cout << ans << endl;
    }
    return 0;
}
