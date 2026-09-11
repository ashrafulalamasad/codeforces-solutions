#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    vector<vector<ll>> adj(n + 1, vector<ll>(2));
    for(ll i = 1; i <= n; i++){
        cin >> adj[i][0] >> adj[i][1];
    }
    vector<ll> p(n + 1);
    p[1] = 1;
    ll x = adj[1][0];
    ll y = adj[1][1];
    if(adj[x][0] == y || adj[x][1] == y){
        p[2] = x;
        p[3] = y;
    }else{
        p[2] = y;
        p[3] = x;
    }
    for(ll i = 3; i < n; i++){
        if(adj[p[i - 1]][0] != p[i]){
            p[i + 1] = adj[p[i - 1]][0];
        }else{
            p[i + 1] = adj[p[i - 1]][1];
        }
    }
    for(ll i = 1; i <= n; i++){
        cout << p[i] << " ";
    }
    cout << endl;
    return 0;
}
