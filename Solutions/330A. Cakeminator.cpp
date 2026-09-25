#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll r, c; cin >> r >> c; vector<string> g(r);
    for(ll i = 0; i < r; i++) cin >> g[i];
    vector<bool> rowOk(r, true), colOk(c, true);
    for(ll i = 0; i < r; i++){
        for(ll j = 0; j < c; j++){
            if(g[i][j] == 'S'){
                rowOk[i] = false;
                colOk[j] = false;
            }
        }
    }
    ll ans = 0;
    for(ll i = 0; i < r; i++){
        for(ll j = 0; j < c; j++){
            if(rowOk[i] || colOk[j]) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
