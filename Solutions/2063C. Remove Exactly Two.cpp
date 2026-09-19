#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<vector<ll>> adj(n + 1);
        vector<ll> eu(n), ev(n), order(n), seen(n + 1, 0);
        for(ll i = 0; i < n - 1; i++){
            ll u, v; cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
            eu[i] = u; ev[i] = v;
        }
        for(ll i = 0; i < n; i++) order[i] = i + 1;
        sort(order.begin(), order.end(), [&](ll x, ll y) {
            return adj[x].size() > adj[y].size();
        });
        ll cur = 1, bestNon = -1;
        for(ll u = 1; u <= n; u++){
            cur = cur + 1;
            for(ll j = 0; j < (ll)adj[u].size(); j++) seen[adj[u][j]] = cur;
            for(ll j = 0; j < n; j++){
                ll v = order[j];
                if(v == u) continue;
                if(seen[v] == cur) continue;
                ll cand = (ll)adj[u].size() + (ll)adj[v].size();
                if(cand > bestNon) bestNon = cand;
                break;
            }
        }
        ll bestAdj = 0;
        for(ll i = 0; i < n - 1; i++){
            ll cand = (ll)adj[eu[i]].size() + (ll)adj[ev[i]].size();
            if(cand > bestAdj) bestAdj = cand;
        }
        ll ans = 0;
        if(bestNon != -1) ans = max(ans, bestNon - 1);
        ans = max(ans, bestAdj - 2);
        cout << ans << endl;
    }
    return 0;
}
