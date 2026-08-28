#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll k, cs = 3; cin >> k;
    while((cs + 1) * cs * (cs - 1) / 6 <= k) cs++;
    ll r = k - cs * (cs - 1) * (cs - 2) / 6;
    vector<vector<ll>> g(100, vector<ll>(100, 0));
    for(ll i = 0; i < cs; i++){
        for(ll j = i + 1; j < cs; j++) g[i][j] = g[j][i] = 1;
    }
    ll v = cs;
    while(r > 0){
        ll c = 2;
        while((c + 1) * c / 2 <= r) c++;
        for(ll i = 0; i < c; i++) g[v][i] = g[i][v] = 1;
        r -= c * (c - 1) / 2;
        v++;
    }
    cout << v << endl;
    for(ll i = 0; i < v; i++){
        for(ll j = 0; j < v; j++) cout << g[i][j];
        cout << endl;
    }
    return 0;
}
