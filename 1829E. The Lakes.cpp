#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll dx[4] = {0, 0, 1, -1};
ll dy[4] = {1, -1, 0, 0};

int main() {
    fast;
    tc{
        ll n, m; cin >> n >> m;
        vector<vector<ll>> a(n, vector<ll>(m));
        for(ll i = 0; i < n; ++i){
            for(ll j = 0; j < m; ++j){
                cin >> a[i][j];
            }
        }
        ll ans = 0;
        for(ll i = 0; i < n; ++i){
            for(ll j = 0; j < m; ++j){
                if(a[i][j] == 0) continue;
                ll sum = 0;
                queue<pair<ll, ll>> q;
                q.push({i, j});
                while(!q.empty()){
                    auto [x, y] = q.front(); q.pop();
                    if(a[x][y] == 0) continue;
                    sum += a[x][y];
                    a[x][y] = 0;
                    for(ll d = 0; d < 4; ++d){
                        ll nx = x + dx[d], ny = y + dy[d];
                        if(nx >= 0 && nx < n && ny >= 0 && ny < m && a[nx][ny] > 0){
                            q.push({nx, ny});
                        }
                    }
                }
                ans = max(ans, sum);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
