#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<ll> pref(n + 1);
    for(ll i = 1; i <= n; i++){
        ll x; cin >> x;
        pref[i] = pref[i - 1] + x;
    }
    vector<ll> vals = pref;
    sort(vals.begin(), vals.end());
    vals.erase(unique(vals.begin(), vals.end()), vals.end());
    ll m = (ll)vals.size();
    const ll NEG = -1000000000000000000LL;
    vector<ll> bit(m + 1, NEG);
    auto update = [&](ll idx, ll val){
        while(idx <= m){
            bit[idx] = max(bit[idx], val);
            idx += idx & -idx;
        }
    };
    auto query = [&](ll idx) -> ll {
        ll res = NEG;
        while(idx > 0){
            res = max(res, bit[idx]);
            idx -= idx & -idx;
        }
        return res;
    };
    auto getRank = [&](ll value) -> ll {
        return (ll)(lower_bound(vals.begin(), vals.end(), value) - vals.begin()) + 1;
    };
    ll dp = 0;
    update(getRank(0), 0);
    for(ll i = 1; i <= n; i++){
        ll r = getRank(pref[i]);
        ll best = query(r), cur = dp;
        if(best != NEG){
            cur = max(cur, i + best);
        }
        update(r, cur - i);
        dp = cur;
    }
    cout << dp << endl;
    return 0;
}
