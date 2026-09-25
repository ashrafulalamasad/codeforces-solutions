#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, x, y; cin >> n >> x >> y;
        vector<ll> p(n + 1), par(n + 1);
        for(ll i = 1; i <= n; i++) cin >> p[i];
        for(ll i = 0; i <= n; i++) par[i] = i;
        auto find = [&](ll v){
            while(par[v] != v){
                par[v] = par[par[v]];
                v = par[v];
            }
            return v;
        };
        auto uni = [&](ll a, ll b){
            a = find(a); b = find(b);
            if(a != b) par[a] = b;
        };
        for(ll i = 1; i <= n; i++){
            if(i + x <= n) uni(i, i + x);
            if(i + y <= n) uni(i, i + y);
        }
        bool ok = true;
        for(ll i = 1; i <= n; i++){
            if(find(i) != find(p[i])) ok = false;
        }
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
