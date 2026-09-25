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
        vector<ll> a(n), b(n), suff(n + 1, 0);
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < n; i++) cin >> b[i];
        for(ll i = n - 1; i >= 0; i--){
            suff[i] = suff[i + 1] + min(a[i], b[i]);
        }
        ll ans = (ll)4e18;
        for(ll i = 0; i < m; i++){
            ans = min(ans, a[i] + suff[i + 1]);
        }
        cout << ans << endl;
    }
    return 0;
}
