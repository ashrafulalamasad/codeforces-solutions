#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, x1, y1, x2, y2; cin >> n >> x1 >> y1 >> x2 >> y2;
    vector<ll> d1(n), d2(n);
    for(ll i=0; i<n; i++){
        ll x, y; cin >> x >> y;
        d1[i] = (x-x1)*(x-x1)+(y-y1)*(y-y1);
        d2[i] = (x-x2)*(x-x2)+(y-y2)*(y-y2);
    }
    vector<ll> idx(n);
    iota(idx.begin(), idx.end(), 0);
    sort(idx.begin(), idx.end(), [&](ll a, ll b){ return d1[a]<d1[b]; });
    ll ans = 0;
    for(ll i=0; i<n; i++) ans = max(ans, d2[i]);
    ll cur = 0;
    for(ll i=0; i<n; i++){
        cur = max(cur, d1[idx[i]]);
        ll mx = 0;
        for(ll j=i+1; j<n; j++) mx = max(mx, d2[idx[j]]);
        ans = min(ans, cur+mx);
    }
    cout << ans << endl;
    return 0;
}
