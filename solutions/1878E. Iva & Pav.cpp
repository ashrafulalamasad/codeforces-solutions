#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n + 1);
        for(ll i = 1; i <= n; ++i) cin >> a[i];
        ll LOG = 0;
        while((1 << LOG) <= n) ++LOG;
        vector<vector<ll>> st(n + 1, vector<ll>(LOG));
        for(ll i = 1; i <= n; ++i) st[i][0] = a[i];
        for(ll j = 1; j < LOG; ++j){
            for(ll i = 1; i + (1 << j) - 1 <= n; ++i){
                st[i][j] = st[i][j - 1] & st[i + (1 << (j - 1))][j - 1];
            }
        }
        auto getAnd = [&](ll l, ll r){
            ll len = r - l + 1;
            ll j = 31 - __builtin_clz(len);
            return st[l][j] & st[r - (1 << j) + 1][j];
        };
        ll q; cin >> q;
        while(q--){
            ll l, k; cin >> l >> k;
            if(a[l] < k){
                cout << -1 << " ";
                continue;
            }
            ll lo = l, hi = n, ans = l;
            while(lo <= hi){
                ll mid = (lo + hi) / 2;
                if(getAnd(l, mid) >= k){
                    ans = mid;
                    lo = mid + 1;
                }else{
                    hi = mid - 1;
                }
            }
            cout << ans << " ";
        }
        cout << endl;
    }
    return 0;
}
