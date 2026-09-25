#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k; vector<ll> p(n), d(n);
        for(ll i = 0; i < n; i++) cin >> p[i];
        for(ll i = 0; i < n; i++) cin >> d[i];
        ll q; cin >> q; vector<ll> a(q);
        for(ll i = 0; i < q; i++) cin >> a[i];
        for(ll qi = 0; qi < q; qi++){
            ll x = a[qi], t = 0, dir = 1;
            vector<vector<ll>> vis(n, vector<ll>(2, 0));
            for(ll i = 0; i < n; i++){
                if(p[i] == x && t == d[i]){
                    dir = -1; vis[i][0] = 1;
                    break;
                }
            }
            ll res = -1;
            while(res == -1){
                ll best = -1, bestDist = 0;
                for(ll i = 0; i < n; i++){
                    if(dir == 1 && p[i] <= x) continue;
                    if(dir == -1 && p[i] >= x) continue;
                    ll dist = p[i] - x;
                    if(dist < 0) dist = -dist;
                    if((t + dist) % k != d[i]) continue;
                    if(best == -1 || dist < bestDist){
                        best = i;
                        bestDist = dist;
                    }
                }
                if(best == -1) res = 1;
                else{
                    x = p[best];
                    t = (t + bestDist) % k;
                    dir = -dir;
                    ll vi = 0;
                    if(dir == 1) vi = 1;
                    if(vis[best][vi] == 1) res = 0;
                    else vis[best][vi] = 1;
                }
            }
            if(res == 1) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}
