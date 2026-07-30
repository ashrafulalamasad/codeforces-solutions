#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, m, k; cin >> n >> m >> k;
    vector<vector<ll>> g(n + 1, vector<ll>(m + 1));
    for(ll i = 1; i <= n; i++){
        for(ll j = 1; j <= m; j++){
            cin >> g[i][j];
        }
    }
    vector<ll> row(n + 1), col(m + 1);
    for(ll i = 1; i <= n; i++) row[i] = i;
    for(ll j = 1; j <= m; j++) col[j] = j;
    while(k--){
        char t; ll a, b; cin >> t >> a >> b;
        if(t == 'r') swap(row[a], row[b]);
        else if(t == 'c') swap(col[a], col[b]);
        else cout << g[row[a]][col[b]] << endl;
    }
    return 0;
}
