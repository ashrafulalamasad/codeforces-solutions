#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m; cin >> n >> m;
        vector<vector<ll>> adj(n + 1);
        for(ll i = 0; i < m; i++){
            ll x, y; cin >> x >> y;
            if(x != y) adj[x].push_back(y);
        }
        vector<ll> lvl(n + 1, 0), closed;
        for(ll v = 1; v <= n; v++){
            if(lvl[v] >= 2){
                closed.push_back(v);
                continue;
            }
            for(ll u : adj[v]) lvl[u] = max(lvl[u], lvl[v] + 1);
        }
        cout << (ll)closed.size() << endl;
        for(ll v : closed) cout << v << " ";
        cout << endl;
    }
    return 0;
}
