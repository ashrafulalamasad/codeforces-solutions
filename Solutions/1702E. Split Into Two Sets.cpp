#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; bool ok = true;
        vector<ll> a(n), b(n), cnt(n + 1, 0);
        for(ll i = 0; i < n; i++){
            cin >> a[i] >> b[i];
            cnt[a[i]]++; cnt[b[i]]++;
            if(a[i] == b[i]) ok = false;
        }
        for(ll v = 1; v <= n; v++){
            if(cnt[v] != 2) ok = false;
        }
        vector<ll> par(n + 1), sz(n + 1, 1);
        for(ll v = 1; v <= n; v++) par[v] = v;
        auto find = [&](ll x) -> ll {
            while(par[x] != x){
                par[x] = par[par[x]];
                x = par[x];
            }
            return x;
        };
        if(ok){
            for(ll i = 0; i < n && ok; i++){
                ll ra = find(a[i]), rb = find(b[i]);
                if(ra == rb){
                    if(sz[ra] % 2 == 1) ok = false;
                }else{
                    if(sz[ra] < sz[rb]) swap(ra, rb);
                    par[rb] = ra;
                    sz[ra] += sz[rb];
                }
            }
        }
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
