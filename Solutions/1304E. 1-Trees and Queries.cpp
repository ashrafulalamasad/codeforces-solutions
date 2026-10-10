#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll LIM = 17, MAXN = 100005;

vector<ll> adj[MAXN];
ll dep[MAXN];
ll par[MAXN][LIM + 1];

ll lca_len(ll a, ll b){
    ll len = 0;
    if(dep[a] > dep[b]) swap(a, b);
    for(ll i = LIM; i >= 0; i--){
        if(dep[par[b][i]] >= dep[a]){
            b = par[b][i];
            len += 1LL << i;
        }
    }
    if(a == b) return len;
    for(ll i = LIM; i >= 0; i--){
        if(par[a][i] != par[b][i]){
            a = par[a][i];
            b = par[b][i];
            len += 1LL << (i + 1);
        }
    }
    return len + 2;
}

int main()
{
    fast;
    ll n; cin >> n;
    for(ll i = 0; i < n - 1; i++){
        ll u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dep[0] = 0; dep[1] = 1; par[1][0] = 0;
    vector<ll> st; st.push_back(1);
    while(!st.empty()){
        ll cur = st.back(); st.pop_back();
        for(ll i = 0; i < adj[cur].size(); i++){
            ll nx = adj[cur][i];
            if(nx == par[cur][0]) continue;
            par[nx][0] = cur;
            dep[nx] = dep[cur] + 1;
            st.push_back(nx);
        }
    }
    for(ll j = 1; j <= LIM; j++) for(ll i = 1; i <= n; i++) par[i][j] = par[par[i][j - 1]][j - 1];
    ll q; cin >> q;
    for(ll i = 0; i < q; i++){
        ll x, y, a, b, k; cin >> x >> y >> a >> b >> k;
        ll wo = lca_len(a, b);
        ll w = min(lca_len(a, x) + lca_len(y, b), lca_len(a, y) + lca_len(x, b)) + 1;
        bool ok = false;
        if(wo <= k && wo % 2 == k % 2) ok = true;
        if(w <= k && w % 2 == k % 2) ok = true;
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
