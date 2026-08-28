#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll LIM = 1000001;

int main()
{
    fast;
    ll n; cin >> n; vector<ll> spf(LIM, 0), dist(LIM, -1), seen;
    for(ll i = 2; i < LIM; i++){
        if(spf[i] == 0){
            for(ll j = i; j < LIM; j += i){
                if(spf[j] == 0) spf[j] = i;
            }
        }
    }
    vector<vector<ll>> adj(LIM); set<pair<ll, ll>> es;
    ll ans = LLONG_MAX;
    for(ll i = 0; i < n; i++){
        ll x, u = 1, v = 1; cin >> x;
        while(x > 1){
            ll p = spf[x], c = 0;
            while(x % p == 0){
                x /= p; c++;
            }
            if(c % 2 == 1){
                if(u == 1) u = p;
                else v = p;
            }
        }
        if(u == 1){
            cout << 1 << endl;
            return 0;
        }
        if(u > v) swap(u, v);
        if(es.insert({u, v}).second){
            adj[u].push_back(v);
            adj[v].push_back(u);
        }else{
            ans = 2;
        }
    }
    for(ll r = 1; ans > 2 && r <= 1000; r++){
        if(adj[r].empty()) continue;
        queue<ll> q; q.push(r);
        dist[r] = 0; seen.push_back(r);
        while(!q.empty()){
            ll u = q.front(); q.pop();
            for(ll w : adj[u]){
                if(dist[w] == -1){
                    dist[w] = dist[u] + 1;
                    seen.push_back(w);
                    q.push(w);
                }else if(dist[w] >= dist[u]){
                    ans = min(ans, dist[u] + dist[w] + 1);
                }
            }
        }
        for(ll w : seen) dist[w] = -1;
        seen.clear();
    }
    if(ans == LLONG_MAX) cout << -1 << endl;
    else cout << ans << endl;
    return 0;
}
