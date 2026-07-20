#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t; cin >> t; while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;
    ll n, m, k, x, y; cin >> n >> m >> k >> x >> y;
    if(n == 1){
        ll each = k / m;
        ll rem = k % m;
        ll mx = each + (rem ? 1 : 0);
        ll mn = each;
        ll ser = each + (y <= rem ? 1 : 0);
        cout << mx << " " << mn << " " << ser << endl;
        return 0;
    }
    ll cycle = (2 * n - 2) * m;
    ll full = k / cycle;
    ll rem = k % cycle;
    vector<vector<ll>> cnt(n, vector<ll>(m, 0));
    for(ll i = 0; i < n; ++i){
        ll base = (i == 0 || i == n - 1) ? full : full * 2;
        fill(cnt[i].begin(), cnt[i].end(), base);
    }
    ll dir = 1, row = 0;
    for(ll i = 0; i < rem; ++i){
        ll col = i % m;
        if(col == 0 && i > 0){
            row += dir;
            if(row == n){ row = n - 2; dir = -1; }
            else if(row == -1){ row = 1; dir = 1; }
        }
        cnt[row][col]++;
    }
    ll mx = 0, mn = 1e18;
    for(ll i = 0; i < n; ++i){
        for(ll j = 0; j < m; ++j){
            mx = max(mx, cnt[i][j]);
            mn = min(mn, cnt[i][j]);
        }
    }
    cout << mx << " " << mn << " " << cnt[x - 1][y - 1] << endl;
    return 0;
}
