#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k;
        vector<vector<ll>> order(k, vector<ll>(n));
        for(ll i = 0; i < k; i++){
            for(ll j = 0; j < n; j++) cin >> order[i][j];
        }
        vector<pair<ll, ll>> edges;
        for(ll i = 0; i < k; i++){
            for(ll j = 1; j + 1 < n; j++){
                edges.push_back({order[i][j], order[i][j + 1]});
            }
        }
        vector<vector<ll>> adj(n + 1);
        vector<ll> indeg(n + 1, 0);
        map<pair<ll, ll>, bool> seen;
        for(auto &e : edges){
            if(!seen[e]){
                seen[e] = true;
                adj[e.first].push_back(e.second);
                indeg[e.second]++;
            }
        }
        ll cnt = 0; queue<ll> bfs;
        for(ll v = 1; v <= n; v++){
            if(indeg[v] == 0) bfs.push(v);
        }
        while(!bfs.empty()){
            ll u = bfs.front(); bfs.pop();
            cnt++;
            for(ll v : adj[u]){
                if(--indeg[v] == 0) bfs.push(v);
            }
        }
        cout << (cnt == n ? "YES" : "NO") << endl;
    }
    return 0;
}
