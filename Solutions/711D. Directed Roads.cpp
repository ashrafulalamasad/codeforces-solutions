#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, mod = 1000000007; cin >> n;
    vector<ll> a(n), indeg(n, 0);
    for(ll i = 0; i < n; i++){
        cin >> a[i];
        a[i]--; indeg[a[i]]++;
    }
    queue<ll> q;
    for(ll i = 0; i < n; i++){
        if(indeg[i] == 0) q.push(i);
    }
    ll tree = 0; vector<bool> cyc(n, true);
    while(!q.empty()){
        ll v = q.front();
        q.pop(); cyc[v] = false; tree++;
        if(--indeg[a[v]] == 0) q.push(a[v]);
    }
    auto power = [&](ll b, ll e) -> ll {
        ll res = 1;
        while(e){
            if(e & 1) res = res * b % mod;
            b = b * b % mod; e >>= 1;
        }
        return res;
    };
    ll ans = power(2, tree);
    vector<bool> vis(n, false);
    for(ll i = 0; i < n; i++){
        if(!cyc[i] || vis[i]) continue;
        ll len = 0, v = i;
        while(!vis[v]){
            vis[v] = true;
            v = a[v]; len++;
        }
        ans = ans * ((power(2, len) - 2 + mod) % mod) % mod;
    }
    cout << ans << endl;
    return 0;
}
