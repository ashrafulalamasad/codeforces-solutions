#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> k(n), h(n);
        for(ll i = 0; i < n; i++) cin >> k[i];
        for(ll i = 0; i < n; i++) cin >> h[i];
        vector<pair<ll, ll>> seg(n);
        for(ll i = 0; i < n; i++) seg[i] = {k[i] - h[i], k[i]};
        sort(seg.begin(), seg.end());
        ll l = seg[0].first, r = seg[0].second, ans = 0;
        for(ll i = 1; i < n; i++){
            if(seg[i].first >= r){
                ans += (r - l) * (r - l + 1) / 2;
                l = seg[i].first;
                r = seg[i].second;
            }else r = max(r, seg[i].second);
        }
        ans += (r - l) * (r - l + 1) / 2;
        cout << ans << endl;
    }
    return 0;
}
