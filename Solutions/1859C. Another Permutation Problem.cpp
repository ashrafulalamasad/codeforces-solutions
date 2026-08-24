#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n;
        ll ans = 0, parent[300];
        auto get = [&](ll x) -> ll {
            while(parent[x] != x){
                parent[x] = parent[parent[x]];
                x = parent[x];
            }
            return x;
        };
        for(ll a = n; a >= 1; a--){
            if((n - 1) * a * n <= ans) break;
            for(ll b = n; b >= 1; b--){
                ll m = a * b;
                if((n - 1) * m <= ans) break;
                for(ll v = 0; v <= n; v++) parent[v] = v;
                parent[b] = get(b - 1);
                ll cur = 0; bool ok = true;
                for(ll i = n; i >= 1; i--){
                    if(i == a) continue;
                    ll c = m / i;
                    if(c > n) c = n;
                    ll v = get(c);
                    if(v == 0){
                        ok = false;
                        break;
                    }
                    parent[v] = get(v - 1);
                    cur += i * v;
                }
                if(ok) ans = max(ans, cur);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
