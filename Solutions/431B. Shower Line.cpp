#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    vector<vector<ll>> g(5, vector<ll>(5));
    for(ll i = 0; i < 5; i++){
        for(ll j = 0; j < 5; j++){
            cin >> g[i][j];
        }
    }
    vector<ll> p = {0, 1, 2, 3, 4};
    ll ans = 0;
    do{
        ll cur = 0;
        cur += g[p[0]][p[1]] + g[p[1]][p[0]];
        cur += g[p[1]][p[2]] + g[p[2]][p[1]];
        cur += 2 * (g[p[2]][p[3]] + g[p[3]][p[2]]);
        cur += 2 * (g[p[3]][p[4]] + g[p[4]][p[3]]);
        ans = max(ans, cur);
    }while(next_permutation(p.begin(), p.end()));
    cout << ans << endl;
    return 0;
}
