#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m, k, H; cin >> n >> m >> k >> H;
        ll ans = 0;
        for(ll i = 0; i < n; i++){
            ll h; cin >> h;
            ll d = H > h ? H - h : h - H;
            if(d > 0 && d % k == 0 && d / k < m) ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
