#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n + 1);
        vector<vector<ll>> ch(n + 1);
        for(ll i = 2; i <= n; i++){
            ll p; cin >> p;
            ch[p].push_back(i);
        }
        for(ll i = 1; i <= n; i++) cin >> a[i];
        vector<ll> ord, q = {1};
        for(ll i = 0; i < (ll)q.size(); i++){
            ord.push_back(q[i]);
            for(ll v : ch[q[i]]) q.push_back(v);
        }
        vector<ll> lo(n + 1, 1), hi(n + 1, 0);
        for(ll idx = n - 1; idx >= 0; idx--){
            ll v = ord[idx];
            if(ch[v].empty()){
                lo[v] = hi[v] = a[v];
                continue;
            }
            ll m = (ll)ch[v].size();
            vector<ll> ids(m), rlo(m), rhi(m);
            iota(ids.begin(), ids.end(), 0);
            bool good = true;
            for(ll j = 0; j < m; j++){
                ll u = ch[v][j];
                rlo[j] = lo[u]; rhi[j] = hi[u];
                good &= rlo[j] <= rhi[j];
            }
            sort(ids.begin(), ids.end(), [&](ll i, ll j){ return rlo[i] < rlo[j]; });
            for(ll j = 1; j < m && good; j++) good = (rhi[ids[j - 1]] + 1 == rlo[ids[j]]);
            for(ll j = 0; j < m && good; j++) good = (ids[j] == (ids[0] + j) % m);
            if(good){
                lo[v] = rlo[ids[0]];
                hi[v] = rhi[ids[m - 1]];
            }
        }
        if(lo[1] <= hi[1]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
