#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<vector<ll>> adj(n+1);
        for(ll i = 1; i < n; i++){
            ll u,v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        if(n == 2){
            cout << "NO\n";
            continue;
        }
        ll center = -1;
        for(ll i = 1; i <= n; i++){
            if((ll)adj[i].size() == 2){
                center = i;
                break;
            }
        }
        if(center == -1){
            cout << "NO\n";
            continue;
        }
        ll u = adj[center][0], w = adj[center][1];
        cout << "YES\n";
        vector<pair<ll,ll>> ans;
        ans.emplace_back(u, center);
        ans.emplace_back(center, w);
        function<void(ll,ll,ll)> dfsU = [&](ll x, ll p, ll d){
            for(ll y: adj[x]){
                if(y == p) continue;
                if(x==u && y==center) continue;
                if(x==center && y==u) continue;
                if(d % 2 == 0) ans.emplace_back(x, y);
                else          ans.emplace_back(y, x);
                dfsU(y, x, d+1);
            }
        };
        dfsU(u, center, 0);
        function<void(ll,ll,ll)> dfsW = [&](ll x, ll p, ll d){
            for(ll y: adj[x]){
                if(y == p) continue;
                if(x==w && y==center) continue;
                if(x==center && y==w) continue;
                if(d % 2 == 0) ans.emplace_back(y, x);
                else          ans.emplace_back(x, y);
                dfsW(y, x, d+1);
            }
        };
        dfsW(w, center, 0);
        for(auto &e: ans){
            cout << e.first << " " << e.second << "\n";
        }
    }
    return 0;
}
