#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, m, q; cin >> n >> m >> q;
    vector<vector<char>> g(n + 1, vector<char>(m + 1, '.'));
    for(ll i = 0; i < q; i++){
        ll r1, c1, r2, c2; char ch;
        cin >> r1 >> c1 >> r2 >> c2 >> ch;
        for(ll r = min(r1, r2); r <= max(r1, r2); r++){
            for(ll c = min(c1, c2); c <= max(c1, c2); c++){
                g[r][c] = ch;
            }
        }
    }
    for(ll i = 1; i <= n; i++){
        for(ll j = 1; j <= m; j++){
            cout << g[i][j];
        }
        cout << endl;
    }
    return 0;
}
