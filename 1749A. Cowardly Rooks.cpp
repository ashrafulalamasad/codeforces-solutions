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
        for(ll i = 1; i <= m; i++){
            ll x, y; cin >> x >> y;
        }
        if(m < n) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
