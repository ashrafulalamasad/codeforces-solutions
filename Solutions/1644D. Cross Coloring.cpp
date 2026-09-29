#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    const ll mod = 998244353;
    tc{
        ll n, m, k, q; cin >> n >> m >> k >> q;
        vector<pair<ll, ll>> a(q);
        for(auto& [x, y] : a) cin >> x >> y;
        set<ll> rows, cols;
        ll cnt = 0;
        for(ll i = q - 1; i >= 0; i--){
            if(!rows.count(a[i].first) || !cols.count(a[i].second)) cnt++;
            rows.insert(a[i].first);
            cols.insert(a[i].second);
            if(rows.size() == n || cols.size() == m) break;
        }
        ll ans = 1;
        while(cnt--) ans = ans * k % mod;
        cout << ans << endl;
    }
    return 0;
}
