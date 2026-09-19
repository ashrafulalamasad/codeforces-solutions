#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, ans = 0; cin >> n; vector<ll> a(n), b(n + 1);
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < n + 1; i++) cin >> b[i];
        for(ll i = 0; i < n; i++) ans += abs(a[i] - b[i]);
        ll extra = -1;
        for(ll i = 0; i < n; i++){
            ll lo = min(a[i], b[i]);
            ll hi = max(a[i], b[i]);
            ll cur = 0;
            if(b[n] < lo) cur = lo - b[n];
            else if(b[n] > hi) cur = b[n] - hi;
            if(extra == -1 || cur < extra) extra = cur;
        }
        cout << ans + 1 + extra << endl;
    }
    return 0;
}
