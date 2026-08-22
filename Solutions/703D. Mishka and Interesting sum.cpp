#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    vector<ll> a(n + 1), pref(n + 1, 0), vals(n);
    for(ll i = 1; i <= n; i++){
        ll x; cin >> x;
        a[i] = x;
        pref[i] = pref[i - 1] ^ x;
        vals[i - 1] = x;
    }
    sort(vals.begin(), vals.end());
    vals.erase(unique(vals.begin(), vals.end()), vals.end());
    ll m; cin >> m;
    vector<ll> head(n + 1, -1), qL(m), qNext(m), ans(m);
    for(ll i = 0; i < m; i++){
        ll l, r; cin >> l >> r;
        qL[i] = l;
        qNext[i] = head[r];
        head[r] = i;
    }
    vector<ll> bit(n + 1, 0), last(vals.size(), 0);
    auto add = [&](ll idx, ll val){
        while(idx <= n){
            bit[idx] ^= val;
            idx += idx & -idx;
        }
    };
    auto query = [&](ll idx){
        ll res = 0;
        while(idx > 0){
            res ^= bit[idx];
            idx -= idx & -idx;
        }
        return res;
    };
    ll uniqueCount = (ll)vals.size();
    ll totalDistinct = 0;
    for(ll i = 1; i <= n; i++){
        ll val = a[i];
        ll lo = 0, hi = uniqueCount;
        while(lo < hi){
            ll mid = (lo + hi) / 2;
            if(vals[mid] < val){
                lo = mid + 1;
            }else{
                hi = mid;
            }
        }
        ll id = lo;
        if(last[id] != 0){
            add(last[id], val);
        }else{
            totalDistinct ^= val;
        }
        add(i, val);
        last[id] = i;
        for(ll qi = head[i]; qi != -1; qi = qNext[qi]){
            ll l = qL[qi];
            ll distinct = totalDistinct ^ query(l - 1);
            ll odd = pref[i] ^ pref[l - 1];
            ans[qi] = distinct ^ odd;
        }
    }
    for(ll i = 0; i < m; i++){
        if(i > 0){
            cout << ' ';
        }
        cout << ans[i];
    }
    cout << endl;
    return 0;
}
