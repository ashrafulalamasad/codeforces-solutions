#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    const ll OFF = 250;
    const ll SZ = 505;
    ll dx[8] = {0, 1, 1, 1, 0, -1, -1, -1};
    ll dy[8] = {1, 1, 0, -1, -1, -1, 0, 1};
    ll n; cin >> n; vector<ll> t(n);
    for(ll i = 0; i < n; i++) cin >> t[i];
    vector<char> visited(SZ * SZ, 0);
    vector<char> seen(SZ * SZ * 8, 0);
    vector<array<ll, 3>> cur, nxt;
    cur.push_back({OFF, OFF - 1, 0});
    for(ll i = 0; i < n; i++){
        fill(seen.begin(), seen.end(), 0);
        nxt.clear();
        for(auto st : cur){
            ll x = st[0];
            ll y = st[1];
            ll d = st[2];
            for(ll step = 0; step < t[i]; step++){
                x += dx[d];
                y += dy[d];
                visited[x * SZ + y] = 1;
            }
            if(i + 1 < n){
                ll base = (x * SZ + y) * 8;
                ll d1 = (d + 1) % 8;
                ll d2 = (d + 7) % 8;
                if(seen[base + d1] == 0){
                    seen[base + d1] = 1;
                    nxt.push_back({x, y, d1});
                }
                if(seen[base + d2] == 0){
                    seen[base + d2] = 1;
                    nxt.push_back({x, y, d2});
                }
            }
        }
        cur.swap(nxt);
    }
    ll ans = 0;
    for(ll i = 0; i < SZ * SZ; i++){
        if(visited[i]){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
