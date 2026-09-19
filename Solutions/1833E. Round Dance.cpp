#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<vector<ll>> g(n);
        for(ll i = 0; i < n; i++){
            ll a; cin >> a; a--;
            g[i].push_back(a); g[a].push_back(i);
        }
        for(ll i = 0; i < n; i++){
            sort(g[i].begin(), g[i].end());
            g[i].erase(unique(g[i].begin(), g[i].end()), g[i].end());
        }
        vector<ll> vis(n, 0); ll bamboos = 0, cycles = 0;
        for(ll i = 0; i < n; i++){
            if(vis[i]) continue;
            vector<ll> comp; queue<ll> q;
            q.push(i); vis[i] = 1; comp.push_back(i);
            while(!q.empty()){
                ll v = q.front(); q.pop();
                for(ll j = 0; j < (ll)g[v].size(); j++){
                    ll to = g[v][j];
                    if(!vis[to]){
                        vis[to] = 1; q.push(to);
                        comp.push_back(to);
                    }
                }
            }
            ll bamboo = 0;
            for(ll j = 0; j < (ll)comp.size(); j++){
                if((ll)g[comp[j]].size() == 1) bamboo = 1;
            }
            if(bamboo) bamboos++;
            else cycles++;
        }
        ll mn = cycles;
        if(bamboos > 0) mn = mn + 1;
        ll mx = cycles + bamboos;
        cout << mn << " " << mx << endl;
    }
    return 0;
}
