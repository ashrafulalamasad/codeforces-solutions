#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

vector<vector<int>> adj;
string s; ll ans;
pair<int, int> dfs(int u){
    int w = (s[u-1] == 'W');
    int b = (s[u-1] == 'B');
    for(int v : adj[u]){
        pair<int, int> res = dfs(v);
        w += res.first;
        b += res.second;
    }
    if(w == b) ans++;
    return {w, b};
}

int main()
{
    fast;
    tc{
        ll n; cin >> n;
        adj.assign(n + 1, vector<int>());
        for(ll i = 2; i <= n; i++){
            ll p; cin >> p;
            adj[p].push_back((int)i);
        }
        cin >> s;
        ans = 0;
        dfs(1);
        cout << ans << endl;
    }
    return 0;
}
