#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m; cin >> n >> m;
        vector<string> grid(n);
        for(ll i = 0; i < n; i++) cin >> grid[i];
        for(ll j = 0; j < m; j++){
            ll bottom = n - 1;
            for(ll i = n - 1; i >= 0; i--){
                if(grid[i][j] == 'o'){
                    bottom = i - 1;
                }else if(grid[i][j] == '*'){
                    grid[i][j] = '.';
                    grid[bottom][j] = '*';
                    bottom--;
                }
            }
        }
        for(ll i = 0; i < n; i++) cout << grid[i] << endl;
        cout << endl;
    }
    return 0;
}
