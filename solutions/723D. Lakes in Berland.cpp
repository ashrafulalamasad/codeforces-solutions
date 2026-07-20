#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, m, k; if(!(cin >> n >> m >> k)) return 0; vector<string> g(n);
    for(ll i = 0; i < n; ++i) cin >> g[i];
    vector<vector<ll>> vis(n, vector<ll>(m, 0));
    vector<pair<ll, vector<pair<ll,ll>>>> lakes;
    ll dirs[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
    for(ll i = 0; i < n; ++i){
        for(ll j = 0; j < m; ++j){
            if(g[i][j] == '.' && !vis[i][j]){
                vector<pair<ll,ll>> cells; queue<pair<ll,ll>> q;
                q.push({i,j}); vis[i][j] = 1;
                bool touchBorder = false;
                while(!q.empty()){
                    auto [x,y] = q.front(); q.pop();
                    cells.push_back({x,y});
                    if(x==0 || x==n-1 || y==0 || y==m-1) touchBorder = true;
                    for(auto &d: dirs){
                        ll nx = x + d[0], ny = y + d[1];
                        if(nx>=0 && nx<n && ny>=0 && ny<m && !vis[nx][ny] && g[nx][ny]=='.'){
                            vis[nx][ny]=1;
                            q.push({nx,ny});
                        }
                    }
                }
                if(!touchBorder) lakes.push_back({(ll)cells.size(), cells});
            }
        }
    }
    sort(lakes.begin(), lakes.end(), [](auto &a, auto &b){ return a.first < b.first; });
    ll toFill = (ll)lakes.size() - k;
    ll filled = 0;
    for(ll idx = 0; idx < toFill; ++idx){
        for(auto &cell : lakes[idx].second){
            g[cell.first][cell.second] = '*';
            ++filled;
        }
    }
    cout << filled << endl;
    for(ll i = 0; i < n; ++i) cout << g[i] << endl;
    return 0;
}
