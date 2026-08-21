#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, m, k; cin >> n >> m >> k; vector<vector<ll>> adj(n + 1);
    for(ll i = 0; i < m; i++){
        ll a, b; cin >> a >> b;
        adj[a].push_back(b); adj[b].push_back(a);
    }
    vector<bool> onPath(n + 1, false); vector<ll> backPath;
    backPath.push_back(1); onPath[1] = true;
    while((ll)backPath.size() <= k){
        bool extended = false;
        for(ll v : adj[backPath.back()]){
            if(!onPath[v]){
                backPath.push_back(v);
                onPath[v] = true;
                extended = true;
                break;
            }
        }
        if(!extended) break;
    }
    vector<ll> frontPath;
    ll frontNode = backPath[0];
    while(true){
        bool extended = false;
        for(ll v : adj[frontNode]){
            if(!onPath[v]){
                frontPath.push_back(v);
                onPath[v] = true;
                frontNode = v;
                extended = true;
                break;
            }
        }
        if(!extended) break;
    }
    reverse(frontPath.begin(), frontPath.end());
    vector<ll> path;
    path.insert(path.end(), frontPath.begin(), frontPath.end());
    path.insert(path.end(), backPath.begin(), backPath.end());
    vector<ll> pos(n + 1, -1);
    for(ll i = 0; i < (ll)path.size(); i++){
        pos[path[i]] = i;
    }
    ll farthestPos = 0;
    for(ll v : adj[path[0]]){
        if(pos[v] != -1){
            farthestPos = max(farthestPos, pos[v]);
        }
    }
    ll cycleLen = farthestPos + 1;
    cout << cycleLen << endl;
    for(ll i = 0; i < cycleLen; i++){
        cout << path[i] << " ";
    }
    cout << endl;
    return 0;
}
