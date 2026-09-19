#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll l, r; cin >> l >> r;
        ll L, R; cin >> L >> R;
        if(r < L || R < l) cout << 1 << endl;
        else{
            ll mx = max(l, L);
            ll mn = min(r, R);
            ll ans = mn - mx;
            if(min(l, L) < mx) ans++;
            if(mn < max(r, R)) ans++;
            cout << ans << endl;
        }
    }
    return 0;
}
