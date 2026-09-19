#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k, win = 0; cin >> n >> k; vector<ll> x(k);
        for(ll i = 0; i < k; i++) cin >> x[i];
        vector<vector<ll>> g(n + 1);
        for(ll i = 0; i < n - 1; i++){
            ll u, v; cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        vector<ll> df(n + 1, -1); queue<ll> q;
        for(ll i = 0; i < k; i++){
            df[x[i]] = 0; q.push(x[i]);
        }
        while(!q.empty()){
            ll u = q.front(); q.pop();
            for(ll v : g[u]){
                if(df[v] == -1){
                    df[v] = df[u] + 1;
                    q.push(v);
                }
            }
        }
        vector<ll> dv(n + 1, -1);
        dv[1] = 0; q.push(1);
        while(!q.empty()){
            ll u = q.front(); q.pop();
            if(u != 1 && g[u].size() == 1){
                win = 1;
                break;
            }
            for(ll v : g[u]){
                if(dv[v] == -1 && dv[u] + 1 < df[v]){
                    dv[v] = dv[u] + 1; q.push(v);
                }
            }
        }
        if(win == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
