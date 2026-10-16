#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m; cin >> n >> m;
        vector<ll> deg(n, 0);
        for(ll i = 0; i < m; i++){
            ll u, v; cin >> u >> v;
            deg[u - 1]++; deg[v - 1]++;
        }
        ll mx = 0, bad = 0;
        for(ll i = 0; i < n; i++) mx = max(mx, deg[i]);
        for(ll i = 0; i < n; i++) if(deg[i] == 0) bad = 1;
        if(bad == 1) cout << "Brain Melt" << endl;
        else if(m == n - 1 && mx == n - 1) cout << 2 << endl;
        else cout << "Many" << endl;
    }
    return 0;
}
