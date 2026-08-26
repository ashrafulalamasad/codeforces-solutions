#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k; vector<string> g(n);
        for(ll i = 0; i < n; i++) cin >> g[i];
        ll m = n / k;
        for(ll i = 0; i < m; i++){
            for(ll j = 0; j < m; j++){
                cout << g[i * k][j * k];
            }
            cout << endl;
        }
    }
    return 0;
}
