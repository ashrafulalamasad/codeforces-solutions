#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, ok = 1; cin >> n;
        vector<ll> b(n + 1), p(n + 1), pos(n + 1), w(n + 1, 0), dist(n + 1, 0);
        for(ll i = 1; i <= n; i++) cin >> b[i];
        for(ll i = 1; i <= n; i++){
            cin >> p[i]; pos[p[i]] = i;
        }
        for(ll i = 1; i <= n; i++){
            if(b[p[i]] != p[i] && pos[b[p[i]]] > i) ok = 0;
        }
        if(ok == 0) cout << -1 << endl;
        else{
            for(ll i = 1; i <= n; i++){
                ll u = p[i];
                if(b[u] == u) dist[u] = 0;
                else{
                    w[u] = i - dist[b[u]];
                    dist[u] = i;
                }
            }
            for(ll i = 1; i <= n; i++){
                if(i > 1) cout << " ";
                cout << w[i];
            }
            cout << endl;
        }
    }
    return 0;
}
