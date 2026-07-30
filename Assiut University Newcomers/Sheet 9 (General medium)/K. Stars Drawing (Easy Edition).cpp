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
    vector<vector<bool>> used(n, vector<bool>(m, false));
    vector<array<ll,3>> ans;
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < m; j++){
            if(g[i][j] != '*') continue;
            ll sz = 0;
            while(i - sz >= 0 && i + sz < n && j - sz >= 0 && j + sz < m
                  && g[i - sz][j] == '*' && g[i + sz][j] == '*'
                  && g[i][j - sz] == '*' && g[i][j + sz] == '*') sz++;
            sz--;
            if(sz >= 1){
                ans.push_back({i + 1, j + 1, sz});
                for(ll k = 0; k <= sz; k++){
                    used[i - k][j] = used[i + k][j] = used[i][j - k] = used[i][j + k] = true;
                }
            }
        }
    }
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < m; j++){
            if(g[i][j] == '*' && !used[i][j]){
                cout << -1 << endl;
                return 0;
            }
        }
    }
    cout << ans.size() << endl;
    for(auto &p : ans) cout << p[0] << " " << p[1] << " " << p[2] << endl;
    return 0;
}
