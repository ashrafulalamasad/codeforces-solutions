#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, m; cin >> n >> m; vector<string> g(n);
    for(ll i = 0; i < n; i++) cin >> g[i];
    if(n >= 4){
        cout << -1 << endl;
        return 0;
    }
    ll S = 1 << n; vector<ll> col(m, 0);
    for(ll j = 0; j < m; j++){
        for(ll i = 0; i < n; i++){
            if(g[i][j] == '1') col[j] |= (1 << i);
        }
    }
    ll alt0 = 0;
    for(ll i = 1; i < n; i += 2) alt0 |= (1 << i);
    ll alt1 = (S - 1) ^ alt0;
    vector<ll> dp(S), ndp(S);
    for(ll v = 0; v < S; v++) dp[v] = __builtin_popcountll(v ^ col[0]);
    for(ll j = 1; j < m; j++){
        fill(ndp.begin(), ndp.end(), n * m + 1);
        for(ll u = 0; u < S; u++){
            for(ll mask : {alt0, alt1}){
                ll v = u ^ mask;
                ndp[v] = min(ndp[v], dp[u] + __builtin_popcountll(v ^ col[j]));
            }
        }
        swap(dp, ndp);
    }
    cout << *min_element(dp.begin(), dp.end()) << endl;
    return 0;
}
