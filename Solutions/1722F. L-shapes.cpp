#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m; cin >> n >> m; vector<string> grid(n);
        for(ll i = 0; i < n; i++) cin >> grid[i];
        vector<vector<bool>> vis(n, vector<bool>(m, false));
        bool ok = true;
        ll dr[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
        ll dc[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < m; j++){
                if(grid[i][j] == '*' && !vis[i][j]){
                    vector<pair<ll, ll>> comp;
                    queue<pair<ll, ll>> q;
                    q.push({i, j});
                    vis[i][j] = true;
                    while(!q.empty()){
                        auto [r, c] = q.front();
                        q.pop();
                        comp.push_back({r, c});
                        for(ll d = 0; d < 8; d++){
                            ll nr = r + dr[d];
                            ll nc = c + dc[d];
                            if(nr >= 0 && nr < n && nc >= 0 && nc < m){
                                if(grid[nr][nc] == '*' && !vis[nr][nc]){
                                    vis[nr][nc] = true;
                                    q.push({nr, nc});
                                }
                            }
                        }
                    }
                    if((ll)comp.size() != 3){
                        ok = false;
                        break;
                    }
                    ll min_r = n, max_r = -1, min_c = m, max_c = -1;
                    for(auto& p : comp){
                        min_r = min(min_r, p.first);
                        max_r = max(max_r, p.first);
                        min_c = min(min_c, p.second);
                        max_c = max(max_c, p.second);
                    }
                    if(max_r - min_r != 1 || max_c - min_c != 1){
                        ok = false;
                        break;
                    }
                }
            }
            if(!ok){
                break;
            }
        }
        if(ok){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
