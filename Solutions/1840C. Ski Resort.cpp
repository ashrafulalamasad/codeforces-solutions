#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k, q; cin >> n >> k >> q;
        ll ans = 0, run = 0;
        for(ll i = 0; i < n; i++){
            ll x; cin >> x;
            if(x <= q){
                run++;
            }else{
                if(run >= k) ans += (run - k + 1) * (run - k + 2) / 2;
                run = 0;
            }
        }
        if(run >= k) ans += (run - k + 1) * (run - k + 2) / 2;
        cout << ans << endl;
    }
    return 0;
}
