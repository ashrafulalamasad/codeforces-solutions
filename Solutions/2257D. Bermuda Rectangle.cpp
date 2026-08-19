#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll s, q; cin >> s >> q; vector<ll> d;
        for(ll i = 1; i <= s / i; i++){
            if(s % i == 0){
                d.push_back(i);
                if(i != s / i){
                    d.push_back(s / i);
                }
            }
        }
        sort(d.begin(), d.end());
        ll k = d.size();
        vector<ll> w, hr, ar;
        for(ll i = k - 1; i >= 0; i--){
            ll rows = s / d[i];
            if(i + 1 < k){
                rows -= s / d[i + 1];
            }
            ll ph = hr.empty() ? 0 : hr.back();
            ll pa = ar.empty() ? 0 : ar.back();
            w.push_back(d[i]);
            hr.push_back(ph + rows);
            ar.push_back(pa + d[i] * rows);
        }
        for(ll i = 0; i < q; i++){
            ll x, y; cin >> x >> y;
            ll idx = lower_bound(hr.begin(), hr.end(), y) - hr.begin();
            ll ans = 0;
            if(idx > 0){
                ll pos = lower_bound(w.begin(), w.begin() + idx, x, greater<ll>()) - w.begin();
                ll rowsGt = pos > 0 ? hr[pos - 1] : 0;
                ll areaGt = pos > 0 ? ar[pos - 1] : 0;
                ans += x * rowsGt + ar[idx - 1] - areaGt;
            }
            ll before = idx > 0 ? hr[idx - 1] : 0;
            ans += (y - before) * min(x, w[idx]);
            cout << ans << endl;
        }
    }
    return 0;
}
