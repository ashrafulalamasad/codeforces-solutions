#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<pair<ll, ll>> edges;
    edges.reserve(2 * n);
    vector<vector<ll>> adj(n + 1);
    for(ll i = 0; i < 2 * n; i++){
        ll a, b; cin >> a >> b;
        edges.push_back({a, b});
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(ll i = 1; i <= n; i++){
        if((ll)adj[i].size() != 4){
            cout << -1 << endl;
            return 0;
        }
    }
    auto has = [&](ll u, ll v) -> bool {
        return find(adj[u].begin(), adj[u].end(), v) != adj[u].end();
    };
    auto verify = [&](const vector<ll>& ans) -> bool {
        vector<ll> pos(n + 1);
        for(ll i = 0; i < n; i++) pos[ans[i]] = i;
        for(ll i = 0; i < 2 * n; i++){
            ll d = abs(pos[edges[i].first] - pos[edges[i].second]);
            if(min(d, n - d) > 2){ return false; }
        }
        return true;
    };
    if(n <= 6){
        vector<ll> p(n);
        for(ll i = 0; i < n; i++) p[i] = i + 1;
        do{
            if(verify(p)){
                for(ll i = 0; i < n; i++) cout << p[i] << " ";
                cout << endl;
                return 0;
            }
        }while(next_permutation(p.begin(), p.end()));
        cout << -1 << endl;
        return 0;
    }
    vector<ll> mid;
    for(ll i = 0; i < 4; i++){
        ll c = 0;
        for(ll j = 0; j < 4; j++){
            if(i != j && has(adj[1][i], adj[1][j])){ c++; }
        }
        if(c == 2){ mid.push_back(adj[1][i]); }
    }
    if((ll)mid.size() != 2){
        cout << -1 << endl;
        return 0;
    }
    ll third = 0;
    for(ll i = 0; i < 4; i++){
        ll x = adj[1][i];
        if(x != mid[0] && x != mid[1] && has(mid[0], x)){ third = x; }
    }
    if(third == 0){
        cout << -1 << endl;
        return 0;
    }
    vector<ll> ans = {1, mid[0], third};
    vector<ll> vis(n + 1, 0);
    vis[1] = vis[mid[0]] = vis[third] = 1;
    while((ll)ans.size() < n){
        ll a = ans[ans.size() - 2];
        ll b = ans[ans.size() - 1];
        ll nxt = 0;
        for(ll i = 0; i < 4; i++){
            ll x = adj[a][i];
            if(!vis[x] && has(b, x)){ nxt = x; }
        }
        if(nxt == 0 || vis[nxt]){
            cout << -1 << endl;
            return 0;
        }
        vis[nxt] = 1;
        ans.push_back(nxt);
    }
    if(!verify(ans)){
        cout << -1 << endl;
        return 0;
    }
    for(ll i = 0; i < n; i++) cout << ans[i] << " ";
    cout << endl;
    return 0;
}
