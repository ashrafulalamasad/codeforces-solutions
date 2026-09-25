#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> g(n);
        for(ll i = 0; i < n; i++) cin >> g[i];
        sort(g.begin(), g.end());
        ll ans = 0;
        for(ll i = n - 1; i >= 0; i -= 2) ans += g[i];
        cout << ans << endl;
    }
    return 0;
}
