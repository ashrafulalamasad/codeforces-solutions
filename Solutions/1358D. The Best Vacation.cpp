#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, x; cin >> n >> x; vector<ll> d(2 * n);
    for(ll i = 0; i < n; i++){
        cin >> d[i];
        d[i + n] = d[i];
    }
    vector<ll> pd(2 * n + 1, 0), ph(2 * n + 1, 0);
    for(ll i = 0; i < 2 * n; i++){
        pd[i + 1] = pd[i] + d[i];
        ph[i + 1] = ph[i] + d[i] * (d[i] + 1) / 2;
    }
    ll ans = 0;
    for(ll i = 0; i < 2 * n; i++){
        if(pd[i + 1] < x) continue;
        ll target = pd[i + 1] - x;
        ll lo = lower_bound(pd.begin(), pd.end(), target) - pd.begin();
        ll cur = ph[i + 1] - ph[lo];
        ll r = x - (pd[i + 1] - pd[lo]);
        if(r > 0){
            ll dd = d[lo - 1];
            cur = cur + dd * (dd + 1) / 2 - (dd - r) * (dd - r + 1) / 2;
        }
        ans = max(ans, cur);
    }
    cout << ans << endl;
    return 0;
}
