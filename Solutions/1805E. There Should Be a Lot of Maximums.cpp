#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

map<ll, ll> cnt[2]; set<ll> dup[2];

void add(ll i, ll v){
    cnt[i][v]++;
    if(cnt[i][v] == 2) dup[i].insert(v);
}

void rem(ll i, ll v){
    cnt[i][v]--;
    if(cnt[i][v] == 1) dup[i].erase(v);
}

ll mad(ll i){
    if(dup[i].empty()) return 0;
    return *dup[i].rbegin();
}

int main()
{
    fast;
    ll n, x = 0, timer = 0; cin >> n;
    vector<ll> eu(n - 1), ev(n - 1); vector<vector<ll>> adj(n + 1);
    for(ll i = 0; i < n - 1; i++){
        cin >> eu[i] >> ev[i];
        adj[eu[i]].push_back(ev[i]); adj[ev[i]].push_back(eu[i]);
    }
    vector<ll> a(n + 1); map<ll, ll> tot;
    for(ll i = 1; i <= n; i++){
        cin >> a[i]; tot[a[i]]++;
    }
    for(auto p : tot){
        if(p.second >= 2) x = max(x, p.first);
    }
    if(x == 0){
        for(ll i = 0; i < n - 1; i++) cout << 0 << endl;
        return 0;
    }
    if(tot[x] >= 3){
        for(ll i = 0; i < n - 1; i++) cout << x << endl;
        return 0;
    }
    ll src = 0, dst = 0;
    for(ll i = 1; i <= n; i++){
        if(a[i] == x){
            if(src == 0) src = i;
            else dst = i;
        }
    }
    vector<ll> par(n + 1, 0), tin(n + 1, 0), sz(n + 1, 1), order(n, 0), it(n + 1, 0), st;
    tin[src] = timer; order[timer] = src; timer++;
    st.push_back(src);
    while(!st.empty()){
        ll u = st.back();
        if(it[u] < (ll)adj[u].size()){
            ll w = adj[u][it[u]]; it[u]++;
            if(w == par[u]) continue;
            par[w] = u; tin[w] = timer; order[timer] = w; timer++;
            st.push_back(w);
        }else{
            st.pop_back();
            if(par[u] != 0) sz[par[u]] += sz[u];
        }
    }
    vector<ll> path;
    for(ll v = dst; v != 0; v = par[v]) path.push_back(v);
    reverse(path.begin(), path.end());
    ll k = (ll)path.size() - 1;
    ll lo = tin[path[1]], hi = tin[path[1]] + sz[path[1]] - 1;
    for(ll i = 0; i < n; i++){
        if(i >= lo && i <= hi) add(1, a[order[i]]);
        else add(0, a[order[i]]);
    }
    vector<ll> res(n + 1, -1);
    for(ll i = 0; i < k; i++){
        ll ch = path[i + 1]; res[ch] = max(mad(0), mad(1));
        if(i + 2 <= k){
            ll nx = path[i + 2];
            ll l1 = tin[ch], r1 = tin[ch] + sz[ch] - 1;
            ll l2 = tin[nx], r2 = tin[nx] + sz[nx] - 1;
            for(ll j = l1; j < l2; j++){
                rem(1, a[order[j]]); add(0, a[order[j]]);
            }
            for(ll j = r2 + 1; j <= r1; j++){
                rem(1, a[order[j]]); add(0, a[order[j]]);
            }
        }
    }
    for(ll i = 0; i < n - 1; i++){
        ll ch = (par[ev[i]] == eu[i] ? ev[i] : eu[i]);
        if(res[ch] != -1) cout << res[ch] << endl;
        else cout << x << endl;
    }
    return 0;
}
