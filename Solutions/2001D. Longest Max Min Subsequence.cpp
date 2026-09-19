#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, SZ = 1; cin >> n; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        ll INF = 4000000000000000000LL;
        vector<vector<ll>> occ(n + 1);
        for(ll i = 0; i < n; i++) occ[a[i]].push_back(i);
        vector<ll> last(n + 1, 0); set<pair<ll, ll>> s;
        for(ll v = 1; v <= n; v++){
            if(occ[v].size() > 0){
                last[v] = occ[v].back();
                s.insert({last[v], v});
            }
        }
        while(SZ < n) SZ = SZ * 2;
        vector<ll> mx(2 * SZ, -1), mn(2 * SZ, INF);
        for(ll i = 0; i < n; i++) mx[SZ + i] = a[i], mn[SZ + i] = a[i];
        for(ll i = SZ - 1; i >= 1; i--) mx[i] = max(mx[i * 2], mx[i * 2 + 1]), mn[i] = min(mn[i * 2], mn[i * 2 + 1]);
        auto upd = [&](ll p){
            ll i = SZ + p;
            mx[i] = -1, mn[i] = INF;
            for(i = i / 2; i >= 1; i = i / 2) mx[i] = max(mx[i * 2], mx[i * 2 + 1]), mn[i] = min(mn[i * 2], mn[i * 2 + 1]);
        };
        auto qmax = [&](ll l, ll r) -> ll {
            if(l > r) return -1;
            l = l + SZ, r = r + SZ;
            ll res = -1;
            while(l <= r){
                if(l % 2 == 1) res = max(res, mx[l++]);
                if(r % 2 == 0) res = max(res, mx[r--]);
                l = l / 2, r = r / 2;
            }
            return res;
        };
        auto qmin = [&](ll l, ll r) -> ll {
            if(l > r) return INF;
            l = l + SZ, r = r + SZ;
            ll res = INF;
            while(l <= r){
                if(l % 2 == 1) res = min(res, mn[l++]);
                if(r % 2 == 0) res = min(res, mn[r--]);
                l = l / 2, r = r / 2;
            }
            return res;
        };
        vector<ll> ans;
        ll pos = -1;
        while(!s.empty()){
            ll G = s.begin()->first;
            ll w = s.begin()->second;
            ll pick = w;
            if(ans.size() % 2 == 0){
                ll cand = qmax(pos + 1, G - 1);
                if(cand != -1) pick = max(pick, cand);
            }else{
                ll cand = qmin(pos + 1, G - 1);
                if(cand != INF) pick = min(pick, cand);
            }
            ans.push_back(pick);
            s.erase({last[pick], pick});
            for(ll p : occ[pick]) upd(p);
            pos = *upper_bound(occ[pick].begin(), occ[pick].end(), pos);
        }
        cout << ans.size() << endl;
        for(ll i = 0; i < ans.size(); i++) cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}
