#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<vector<ll>> g(n+1, vector<ll>(n+1));
        set<ll> seen;
        for(ll i = 1; i <= n; i++){
            for(ll j = 1; j <= n; j++){
                cin >> g[i][j];
                seen.insert(g[i][j]);
            }
        }
        vector<ll> p(2*n+1);
        for(ll x = 1; x <= 2*n; x++){
            if(!seen.count(x)){
                p[1] = x;
                break;
            }
        }
        for(ll k = 2; k <= 2*n; k++){
            ll i = max(1LL, k - n);
            ll j = k - i;
            p[k] = g[i][j];
        }
        for(ll k = 1; k <= 2*n; k++){
            cout << p[k] << " ";
        }
        cout << endl;
    }
    return 0;
}
