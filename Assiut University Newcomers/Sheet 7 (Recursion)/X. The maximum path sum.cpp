#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll grid[11][11], n, m;

ll maxPath(ll r, ll c){
    if(r == n - 1 && c == m - 1) return grid[r][c];
    ll right = -1e18, down = -1e18;
    if(c + 1 < m) right = maxPath(r, c + 1);
    if(r + 1 < n) down = maxPath(r + 1, c);
    return grid[r][c] + max(right, down);
}

int main()
{
    fast;
    cin >> n >> m;
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < m; j++){
            cin >> grid[i][j];
        }
    }
    cout << maxPath(0, 0) << endl;
    return 0;
}
