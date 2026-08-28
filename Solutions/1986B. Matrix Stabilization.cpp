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
        vector<vector<ll>> a(n, vector<ll>(m));
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < m; j++){
                cin >> a[i][j];
            }
        }
        vector<vector<ll>> b(n, vector<ll>(m));
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < m; j++){
                ll mx = 0;
                if(i > 0) mx = max(mx, a[i-1][j]);
                if(i+1 < n) mx = max(mx, a[i+1][j]);
                if(j > 0) mx = max(mx, a[i][j-1]);
                if(j+1 < m) mx = max(mx, a[i][j+1]);
                b[i][j] = min(a[i][j], mx);
            }
        }
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < m; j++){
                cout << b[i][j];
                if(j+1 < m) cout << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
