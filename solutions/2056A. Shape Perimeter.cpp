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
        ll ans = 4 * m * n;
        for(ll i = 0; i < n; i++){
            ll x, y; cin >> x >> y;
            if(i == 0){
                continue;
            }
            ans -= 2 * (m - x + m - y);
        }
        cout << ans << endl;
    }
    return 0;
}
