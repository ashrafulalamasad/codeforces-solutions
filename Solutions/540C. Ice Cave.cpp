#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, m; cin >> n >> m; vector<string> g(n);
    for(ll i = 0; i < n; i++) cin >> g[i];
    ll r1, c1; cin >> r1 >> c1; r1--; c1--;
    ll r2, c2; cin >> r2 >> c2; r2--; c2--;
    ll dx[4] = {-1, 1, 0, 0}, dy[4] = {0, 0, -1, 1};
    vector<vector<ll>> v(n, vector<ll>(m, 0));
    queue<ll> q; q.push(r1 * m + c1); v[r1][c1] = 1;
    while(!q.empty()){
        ll cur = q.front(); q.pop();
        ll x = cur / m, y = cur % m;
        for(ll d = 0; d < 4; d++){
            ll nx = x + dx[d], ny = y + dy[d];
            if(nx < 0 || nx >= n || ny < 0 || ny >= m || v[nx][ny] || g[nx][ny] == 'X'){
                continue;
            }
            v[nx][ny] = 1; q.push(nx * m + ny);
        }
    }
    if(g[r2][c2] == 'X'){
        for(ll d = 0; d < 4; d++){
            ll nr = r2 + dx[d], nc = c2 + dy[d];
            if(nr >= 0 && nr < n && nc >= 0 && nc < m && v[nr][nc]){
                cout << "YES" << endl;
                return 0;
            }
        }
        cout << "NO" << endl;
        return 0;
    }
    if(!v[r2][c2]){
        cout << "NO" << endl;
        return 0;
    }
    ll cnt = 0;
    for(ll d = 0; d < 4; d++){
        ll nr = r2 + dx[d], nc = c2 + dy[d];
        if(nr >= 0 && nr < n && nc >= 0 && nc < m && g[nr][nc] == '.'){
            cnt++;
        }
    }
    if(cnt > 1 || (cnt > 0 && llabs(r1 - r2) + llabs(c1 - c2) == 1)){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
