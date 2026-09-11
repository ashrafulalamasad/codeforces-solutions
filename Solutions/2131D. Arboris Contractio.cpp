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
        for(ll i = 0; i < n - 1; i++){
            ll u, v; cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        ll leaves = 0, mx = 0, best = 0;
        for(ll i = 1; i <= n; i++){
            mx = max(mx, (ll)adj[i].size());
            if(adj[i].size() == 1) leaves++;
        }
        for(ll i = 1; i <= n; i++){
            ll cnt = 0;
            for(ll v : adj[i]){
                if(adj[v].size() == 1) cnt++;
            }
            best = max(best, cnt);
        }
        if(mx == n - 1) cout << 0 << endl;
        else cout << leaves - best << endl;
    }
    return 0;
}
