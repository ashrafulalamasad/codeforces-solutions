#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const ll MOD = 1000000007;

int main()
{
    fast;
    ll n; if(!(cin >> n)) return 0; vector<ll> cost(n+1);
    for(ll i=1;i<=n;i++) cin >> cost[i];
    ll m; cin >> m;
    vector<vector<ll>> g(n+1);
    for(ll i=0,u,v;i<m;i++){ cin >> u >> v; g[u].push_back(v); }
    vector<ll> disc(n+1,0), low(n+1,0), onst(n+1,0);
    vector<ll> st;
    ll timer=1, total=0, ways=1;
    function<void(ll)> dfs = [&](ll u){
        disc[u]=low[u]=timer++;
        st.push_back(u); onst[u]=1;
        for(ll v: g[u]){
            if(!disc[v]){
                dfs(v);
                low[u]=min(low[u], low[v]);
            }else if(onst[v]){
                low[u]=min(low[u], disc[v]);
            }
        }
        if(low[u]==disc[u]){
            ll mn = LLONG_MAX;
            ll cnt = 0;
            while(true){
                ll v = st.back(); st.pop_back(); onst[v]=0;
                if(cost[v] < mn){ mn = cost[v]; cnt = 1; }
                else if(cost[v] == mn) ++cnt;
                if(v==u) break;
            }
            total += mn;
            ways = (ways * (cnt % MOD)) % MOD;
        }
    };
    for(ll i=1; i<=n; i++) if(!disc[i]) dfs(i);
    cout << total << " " << ways % MOD << endl;
    return 0;
}
