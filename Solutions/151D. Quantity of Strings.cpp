#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, m, k; cin >> n >> m >> k;
    vector<ll> p(n), sz(n, 1);
    for(ll i = 0; i < n; i++) p[i] = i;
    auto find = [&](ll v) -> ll {
        while(p[v] != v){
            p[v] = p[p[v]];
            v = p[v];
        }
        return v;
    };
    auto unite = [&](ll a, ll b){
        a = find(a);
        b = find(b);
        if(a != b){
            if(sz[a] < sz[b]){
                swap(a, b);
            }
            p[b] = a;
            sz[a] += sz[b];
        }
    };
    for(ll s = 0; s + k <= n; s++){
        for(ll l = 0; l < k / 2; l++){
            unite(s + l, s + k - 1 - l);
        }
    }
    ll comps = 0;
    for(ll i = 0; i < n; i++){
        if(find(i) == i){
            comps++;
        }
    }
    ll mod = 1000000007, ans = 1;
    m %= mod;
    for(ll i = 0; i < comps; i++){
        ans = ans * m % mod;
    }
    cout << ans << endl;
    return 0;
}
