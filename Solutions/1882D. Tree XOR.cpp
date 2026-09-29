#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n + 1), parent(n + 1), subtree(n + 1, 1), order;
        vector<vector<ll>> graph(n + 1);
        for(ll i = 1; i <= n; i++) cin >> a[i];
        for(ll i = 1; i < n; i++){
            ll u, v; cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        order.push_back(1);
        parent[1] = -1;
        for(ll i = 0; i < (ll) order.size(); i++){
            ll vertex = order[i];
            for(ll next : graph[vertex]){
                if(next == parent[vertex]) continue;
                parent[next] = vertex;
                order.push_back(next);
            }
        }
        ll rootAnswer = 0;
        for(ll i = n - 1; i >= 1; i--){
            ll vertex = order[i];
            subtree[parent[vertex]] += subtree[vertex];
            rootAnswer += subtree[vertex] * (a[vertex] ^ a[parent[vertex]]);
        }
        vector<ll> answer(n + 1);
        answer[1] = rootAnswer;
        for(ll vertex : order){
            for(ll next : graph[vertex]){
                if(next == parent[vertex]) continue;
                answer[next] = answer[vertex] + (n - 2 * subtree[next]) * (a[vertex] ^ a[next]);
            }
        }
        for(ll i = 1; i <= n; i++) cout << answer[i] << " ";
        cout << endl;
    }
    return 0;
}
