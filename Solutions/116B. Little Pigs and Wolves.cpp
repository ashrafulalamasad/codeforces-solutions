#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, m; cin >> n >> m;
    vector<string> grid(n);
    for(ll i = 0; i < n; i++) cin >> grid[i];
    int ans = 0;
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < m; j++){
            if(grid[i][j] != 'W') continue;
            int dy[] = {0, 0, 1, -1};
            int dx[] = {1, -1, 0, 0};
            for(ll d = 0; d < 4; d++){
                int ni = i + dy[d];
                int nj = j + dx[d];
                if(ni >= 0 && ni < n && nj >= 0 && nj < m && grid[ni][nj] == 'P'){
                    grid[ni][nj] = '.';
                    ans++;
                    break;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}
