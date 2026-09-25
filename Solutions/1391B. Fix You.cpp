#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m, ans = 0; cin >> n >> m;
        vector<string> g(n);
        for(ll i = 0; i < n; i++) cin >> g[i];
        for(ll j = 0; j < m - 1; j++){
            if(g[n - 1][j] != 'R') ans++;
        }
        for(ll i = 0; i < n - 1; i++){
            if(g[i][m - 1] != 'D') ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
