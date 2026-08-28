#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    vector<vector<ll>> adj(n + 1);
    for(ll i = 0; i < n - 1; i++){
        ll u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    auto bfs = [&](ll s, vector<ll>& d){
        d.assign(n + 1, -1);
        queue<ll> q; q.push(s); d[s] = 0;
        while(!q.empty()){
            ll u = q.front(); q.pop();
            for(ll w : adj[u]){
                if(d[w] == -1){
                    d[w] = d[u] + 1; q.push(w);
                }
            }
        }
    };
    vector<ll> d0, d1, d2;
    bfs(1, d0); ll u1 = 1;
    for(ll i = 1; i <= n; i++){
        if(d0[i] > d0[u1]) u1 = i;
    }
    bfs(u1, d1); ll u2 = u1;
    for(ll i = 1; i <= n; i++){
        if(d1[i] > d1[u2]) u2 = i;
    }
    bfs(u2, d2); vector<ll> cnt(n + 2, 0);
    for(ll i = 1; i <= n; i++){
        cnt[max(d1[i], d2[i])]++;
    }
    ll iso = 0;
    for(ll k = 1; k <= n; k++){
        iso += cnt[k - 1];
        cout << iso + (iso < n ? 1 : 0) << " ";
    }
    cout << endl;
    return 0;
}
