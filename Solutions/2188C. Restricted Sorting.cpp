#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        vector<ll> b = a;
        sort(b.begin(), b.end());
        if(a == b) cout << -1 << endl;
        else{
            ll ans = 4000000000000000000LL;
            for(ll i = 0; i < n; i++) if(a[i] != b[i]) ans = min(ans, max(a[i] - b[0], b[n - 1] - a[i]));
            cout << ans << endl;
        }
    }
    return 0;
}
