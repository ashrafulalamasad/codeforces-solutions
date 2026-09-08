#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k;
        vector<vector<ll>> graph(n);
        vector<ll> degree(n);
        for(ll i = 0; i < n - 1; i++){
            ll u, v; cin >> u >> v; u--; v--;
            graph[u].push_back(v);
            graph[v].push_back(u);
            degree[u]++; degree[v]++;
        }
        queue<ll> leaves;
        for(ll i = 0; i < n; i++){
            if(degree[i] <= 1) leaves.push(i);
        }
        vector<bool> removed(n);
        ll remaining = n;
        while(k-- && !leaves.empty()){
            ll layerSize = leaves.size();
            while(layerSize--){
                ll vertex = leaves.front(); leaves.pop();
                if(removed[vertex]) continue;
                removed[vertex] = true;
                remaining--;
                for(ll neighbor : graph[vertex]){
                    if(!removed[neighbor]){
                        degree[neighbor]--;
                        if(degree[neighbor] == 1) leaves.push(neighbor);
                    }
                }
            }
        }
        cout << remaining << endl;
    }
    return 0;
}
