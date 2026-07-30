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
    vector<bool> rowSafe(r, true), colSafe(c, true);
    for(ll i = 0; i < r; i++){
        for(ll j = 0; j < c; j++){
            if(g[i][j] == 'S'){
                rowSafe[i] = false;
                colSafe[j] = false;
            }
        }
    }
    ll rows = 0, cols = 0;
    for(bool b : rowSafe) if(b) rows++;
    for(bool b : colSafe) if(b) cols++;
    cout << rows * c + cols * r - rows * cols << endl;
    return 0;
}
