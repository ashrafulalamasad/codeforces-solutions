#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m; cin >> n >> m; vector<pair<ll, ll>> seg(m);
        for(ll i = 0; i < m; i++) cin >> seg[i].first >> seg[i].second;
        ll q; cin >> q; vector<ll> x(q);
        for(ll i = 0; i < q; i++) cin >> x[i];
        vector<ll> pre(n + 1, 0);
        auto check = [&](ll k) -> bool {
            for(ll i = 0; i <= n; i++) pre[i] = 0;
            for(ll i = 0; i < k; i++) pre[x[i]] = 1;
            for(ll i = 1; i <= n; i++) pre[i] += pre[i - 1];
            for(ll i = 0; i < m; i++){
                ll ones = pre[seg[i].second] - pre[seg[i].first - 1];
                ll len = seg[i].second - seg[i].first + 1;
                if(2 * ones > len) return true;
            }
            return false;
        };
        ll lo = 1, hi = q, ans = -1;
        while(lo <= hi){
            ll mid = (lo + hi) / 2;
            if(check(mid)){
                ans = mid;
                hi = mid - 1;
            }else{
                lo = mid + 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
