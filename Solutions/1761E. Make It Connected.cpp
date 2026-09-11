#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<string> adj(n);
        vector<ll> deg(n, 0);
        for(ll i = 0; i < n; i++){
            cin >> adj[i];
            for(ll j = 0; j < n; j++){
                if(adj[i][j] == '1') deg[i]++;
            }
        }
        vector<bool> visited(n, false);
        vector<vector<ll>> comps;
        for(ll i = 0; i < n; i++){
            if(!visited[i]){
                vector<ll> comp;
                vector<ll> q;
                q.push_back(i);
                visited[i] = true;
                ll head = 0;
                while(head < (ll)q.size()){
                    ll u = q[head++];
                    comp.push_back(u);
                    for(ll v = 0; v < n; v++){
                        if(adj[u][v] == '1' && !visited[v]){
                            visited[v] = true;
                            q.push_back(v);
                        }
                    }
                }
                comps.push_back(comp);
            }
        }
        if(comps.size() == 1){
            cout << 0 << endl;
            cout << endl;
            continue;
        }
        bool found = false;
        for(ll c = 0; c < (ll)comps.size() && !found; c++){
            ll sz = comps[c].size();
            for(ll idx = 0; idx < sz && !found; idx++){
                ll u = comps[c][idx];
                if(deg[u] < sz - 1){
                    ll best = comps[c][0];
                    for(ll v : comps[c]){
                        if(deg[v] < deg[best]) best = v;
                    }
                    cout << 1 << endl;
                    cout << best + 1 << endl;
                    found = true;
                }
            }
        }
        if(found) continue;
        bool single = false;
        for(ll c = 0; c < (ll)comps.size() && !single; c++){
            if(comps[c].size() == 1){
                cout << 1 << endl;
                cout << comps[c][0] + 1 << endl;
                single = true;
            }
        }
        if(single) continue;
        if(comps.size() == 2){
            auto comp = comps[0].size() < comps[1].size() ? comps[0] : comps[1];
            cout << comp.size() << endl;
            for(ll i = 0; i < (ll)comp.size(); i++){
                cout << comp[i] + 1;
                if(i < (ll)comp.size() - 1) cout << " ";
            }
            cout << endl;
            continue;
        }
        cout << 2 << endl;
        cout << comps[0][0] + 1 << " " << comps[1][0] + 1 << endl;
    }
    return 0;
}
