#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    const ll mod = 1000000007;
    ll n, m, k, x, ans = 0; cin >> n >> m;
    vector<vector<ll>> graph(n);
    for(ll i = 1; i < n; i++){
        ll u, v; cin >> u >> v;
        graph[u - 1].push_back(v - 1);
        graph[v - 1].push_back(u - 1);
    }
    cin >> k >> x;
    vector<ll> parent(n, -1), order = {0};
    for(ll i = 0; i < n; i++){
        ll v = order[i];
        for(ll u : graph[v]){
            if(u == parent[v]) continue;
            parent[u] = v;
            order.push_back(u);
        }
    }
    vector<array<ll, 11>> low(n), high(n), top(n);
    for(ll z = n - 1; z >= 0; z--){
        ll v = order[z];
        array<ll, 11> all{}, noTop{}, lower{};
        all[0] = noTop[0] = lower[0] = 1;
        for(ll u : graph[v]){
            if(parent[u] != v) continue;
            array<ll, 11> nextAll{}, nextNoTop{}, nextLower{};
            for(ll i = 0; i <= x; i++){
                for(ll j = 0; i + j <= x; j++){
                    nextAll[i + j] = (nextAll[i + j] + all[i] * ((low[u][j] + high[u][j] + top[u][j]) % mod)) % mod;
                    nextNoTop[i + j] = (nextNoTop[i + j] + noTop[i] * ((low[u][j] + high[u][j]) % mod)) % mod;
                    nextLower[i + j] = (nextLower[i + j] + lower[i] * low[u][j]) % mod;
                }
            }
            all = nextAll; noTop = nextNoTop; lower = nextLower;
        }
        for(ll i = 0; i <= x; i++){
            low[v][i] = all[i] * (k - 1) % mod;
            high[v][i] = noTop[i] * (m - k) % mod;
            if(i > 0) top[v][i] = lower[i - 1];
        }
    }
    for(ll i = 0; i <= x; i++) ans = (ans + low[0][i] + high[0][i] + top[0][i]) % mod;
    cout << ans << endl;
    return 0;
}
