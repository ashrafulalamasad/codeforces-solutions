#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll N = 5005;
vector<ll> adj[N];
ll sz[N], par[N];

void dfs(ll u, ll p){
    sz[u] = 1;
    ::par[u] = p;
    for(ll v : adj[u]){
        if(v != p){
            dfs(v, u);
            sz[u] += sz[v];
        }
    }
}

int main()
{
    fast;
    ll n; cin >> n;
    for(ll i = 2; i <= n; i++){
        ll p; cin >> p;
        adj[i].push_back(p);
        adj[p].push_back(i);
    }
    dfs(1, 0);
    ll ans = 0;
    for(ll u = 1; u <= n; u++){
        vector<ll> sub;
        for(ll v : adj[u]){
            if(v == par[u]) continue;
            sub.push_back(sz[v]);
        }
        ll sum = 0, best = 0;
        for(ll s : sub) sum += s;
        if(sub.empty()) continue;
        vector<bool> dp(sum + 1, false);
        dp[0] = true;
        for(ll s : sub){
            for(ll j = sum; j >= s; j--){
                dp[j] = dp[j] || dp[j - s];
            }
        }
        for(ll j = 0; j <= sum; j++){
            if(dp[j]) best = max(best, j * (sum - j));
        }
        ans += best;
    }
    cout << ans << endl;
    return 0;
}
