#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, m, v; cin >> n >> m >> v;
    ll mx = (n - 1) * (n - 2) / 2 + 1;
    if(m < n - 1 || m > mx){
        cout << -1 << endl;
        return 0;
    }
    vector<pair<ll, ll>> edges;
    set<pair<ll, ll>> used;
    auto add = [&](ll a, ll b){
        if(a > b) swap(a, b);
        if(!used.count({a, b})){
            used.insert({a, b});
            edges.push_back({a, b});
        }
    };
    vector<ll> nodes;
    for(ll i = 1; i <= n; i++) if(i != v) nodes.push_back(i);
    ll x = nodes[0], y = nodes[1];
    add(v, x);
    add(v, y);
    for(ll z : nodes){
        if(z != x && z != y) add(y, z);
    }
    for(ll i = 1; i <= n && (ll)edges.size() < m; i++){
        for(ll j = i + 1; j <= n && (ll)edges.size() < m; j++){
            if(i == x && j != v) continue;
            if(j == x && i != v) continue;
            add(i, j);
        }
    }
    for(auto [a, b] : edges) cout << a << " " << b << endl;
    return 0;
}
