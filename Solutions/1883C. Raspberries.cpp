#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        if(k == 2){
            ll ok = 0;
            for(ll i = 0; i < n; i++) if(a[i] % 2 == 0) ok = 1;
            cout << (ok ? 0 : 1) << endl;
        }else if(k == 3){
            ll ans = 3;
            for(ll i = 0; i < n; i++) ans = min(ans, (3 - a[i] % 3) % 3);
            cout << ans << endl;
        }else if(k == 5){
            ll ans = 5;
            for(ll i = 0; i < n; i++) ans = min(ans, (5 - a[i] % 5) % 5);
            cout << ans << endl;
        }else{
            ll even = 0, ok = 0, ans = 4;
            for(ll i = 0; i < n; i++){
                if(a[i] % 4 == 0) ok = 1;
                if(a[i] % 2 == 0) even++;
                ans = min(ans, (4 - a[i] % 4) % 4);
            }
            if(ok || even >= 2) cout << 0 << endl;
            else cout << min(ans, even == 0 ? 2LL : 1LL) << endl;
        }
    }
    return 0;
}
