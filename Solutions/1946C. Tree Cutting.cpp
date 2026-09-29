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
        for(ll i = 0; i < n - 1; i++){
            ll u, v; cin >> u >> v;
            u--; v--;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        vector<ll> parent(n, -1), order = {0};
        for(ll i = 0; i < n; i++){
            ll node = order[i];
            for(ll next : graph[node]){
                if(next != parent[node]){
                    parent[next] = node;
                    order.push_back(next);
                }
            }
        }
        ll low = 1, high = n / (k + 1), ans = 1;
        while(low <= high){
            ll mid = (low + high) / 2;
            vector<ll> size(n, 1);
            ll cuts = 0;
            for(ll i = n - 1; i > 0; i--){
                ll node = order[i];
                if(size[node] >= mid) cuts++;
                else size[parent[node]] += size[node];
            }
            if(cuts >= k + 1 || (cuts >= k && size[0] >= mid)){
                ans = mid;
                low = mid + 1;
            }else high = mid - 1;
        }
        cout << ans << endl;
    }
    return 0;
}
