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
        vector<ll> ra(n * m + 1), ca(n * m + 1);
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < m; j++){
                ll x; cin >> x;
                ra[x] = i; ca[x] = j;
            }
        }
        vector<ll> rowMap(n, -1), colMap(m, -1);
        bool ok = true;
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < m; j++){
                ll x; cin >> x;
                if(rowMap[i] == -1) rowMap[i] = ra[x];
                else if(rowMap[i] != ra[x]) ok = false;
                if(colMap[j] == -1) colMap[j] = ca[x];
                else if(colMap[j] != ca[x]) ok = false;
            }
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}
