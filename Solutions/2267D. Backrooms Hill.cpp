#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        vector<ll> par(n + 1);
        for(ll i = 0; i < n; i++) par[a[i]] = (i % 2 == 0) ? 1 : 0;
        bool ok = true;
        for(ll v = n; v >= 2; v -= 2){
            if(par[v] == par[v - 1]){
                ok = false;
                break;
            }
        }
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
