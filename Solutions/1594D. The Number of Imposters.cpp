#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m; cin >> n >> m;
        vector<vector<pair<ll, ll>>> graph(n + 1);
        for(ll i = 0; i < m; i++){
            ll u, v; string role; cin >> u >> v >> role;
            ll difference = role == "imposter";
            graph[u].push_back({v, difference});
            graph[v].push_back({u, difference});
        }
        vector<ll> color(n + 1, -1);
        ll answer = 0;
        bool possible = true;
        for(ll start = 1; start <= n; start++){
            if(color[start] != -1) continue;
            ll count[2] = {0, 0}; queue<ll> nodes;
            nodes.push(start); color[start] = 0;
            while(!nodes.empty()){
                ll current = nodes.front(); nodes.pop();
                count[color[current]]++;
                for(auto edge : graph[current]){
                    ll next = edge.first, difference = edge.second;
                    if(color[next] == -1){
                        color[next] = color[current] ^ difference;
                        nodes.push(next);
                    }else if(color[next] != (color[current] ^ difference)){
                        possible = false;
                    }
                }
            }
            answer += max(count[0], count[1]);
        }
        if(possible) cout << answer << endl;
        else cout << -1 << endl;
    }
    return 0;
}
