#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; string s0, s1; cin >> s0 >> s1;
        vector<string> s = {s0, s1};
        vector<vector<ll>> vis(2, vector<ll>(n, 0));
        queue<pair<ll, ll>> q; q.push({0, 0});
        vis[0][0] = 1; bool found = false;
        ll dr[4] = {1, -1, 0, 0};
        ll dc[4] = {0, 0, 1, -1};
        while(q.empty() == false){
            auto cur = q.front(); q.pop();
            ll r = cur.first, c = cur.second;
            for(ll k = 0; k < 4; k++){
                ll nr = r + dr[k], nc = c + dc[k];
                if(nr < 0 || nr >= 2 || nc < 0 || nc >= n) continue;
                ll fr = nr, fc = nc + (s[nr][nc] == '>' ? 1 : -1);
                if(fr == 1 && fc == n - 1) found = true;
                else{
                    if(vis[fr][fc] == 0){
                        vis[fr][fc] = 1; q.push({fr, fc});
                    }
                }
                if(found) break;
            }
            if(found) break;
        }
        if(found) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
