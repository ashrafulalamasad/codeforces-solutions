#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n;
        vector<vector<pair<ll,ll>>> adj(n+1);
        for(ll i = 1; i < n; i++){
            ll u, v; cin >> u >> v;
            adj[u].push_back({v, i});
            adj[v].push_back({u, i});
        }
        vector<ll> round(n+1, 0), pedge(n+1, 0);
        function<void(ll,ll)> dfs = [&](ll u, ll p){
            for(auto [v, pos] : adj[u]){
                if(v == p) continue;
                round[v] = round[u] + (u == 1 || pos <= pedge[u]);
                pedge[v] = pos;
                dfs(v, u);
            }
        };
        dfs(1, 0);
        ll ans = 0;
        for(ll i = 1; i <= n; i++) ans = max(ans, round[i]);
        cout << ans << endl;
    }
    return 0;
}
