#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m, sum = 0; cin >> n >> m;
        vector<ll> value(n), target(n), color(n, -1);
        for(ll& x : value) cin >> x;
        for(ll& x : target) cin >> x;
        vector<vector<ll>> graph(n);
        for(ll i = 0; i < m; i++){
            ll u, v; cin >> u >> v;
            u--; v--;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        for(ll i = 0; i < n; i++) sum += value[i] - target[i];
        if(sum % 2 != 0){
            cout << "NO" << endl;
            continue;
        }
        bool bipartite = true;
        queue<ll> q;
        for(ll start = 0; start < n; start++){
            if(color[start] != -1) continue;
            color[start] = 0;
            q.push(start);
            while(!q.empty()){
                ll u = q.front(); q.pop();
                for(ll v : graph[u]){
                    if(color[v] == -1){
                        color[v] = color[u] ^ 1;
                        q.push(v);
                    }else if(color[v] == color[u]){
                        bipartite = false;
                    }
                }
            }
        }
        if(!bipartite){
            cout << "YES" << endl;
            continue;
        }
        ll left = 0, right = 0;
        for(ll i = 0; i < n; i++){
            if(color[i] == 0) left += value[i] - target[i];
            else right += value[i] - target[i];
        }
        cout << (left == right ? "YES" : "NO") << endl;
    }
    return 0;
}
