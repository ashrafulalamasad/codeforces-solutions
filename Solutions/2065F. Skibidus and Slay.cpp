#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n+1);
        for(ll i = 1; i <= n; i++) cin >> a[i];
        vector<vector<ll>> adj(n+1);
        for(ll i = 0; i < n - 1; i++){
            ll u, v; cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<ll> ans(n+1, 0);
        for(ll u = 1; u <= n; u++){
            for(ll v : adj[u]){
                if(u < v && a[u] == a[v]) ans[a[u]] = 1;
            }
        }
        for(ll w = 1; w <= n; w++){
            map<ll, ll> cnt;
            for(ll u : adj[w]) cnt[a[u]]++;
            for(auto& [val, c] : cnt){
                if(c >= 2) ans[val] = 1;
            }
        }
        for(ll i = 1; i <= n; i++) cout << ans[i];
        cout << endl;
    }
    return 0;
}
