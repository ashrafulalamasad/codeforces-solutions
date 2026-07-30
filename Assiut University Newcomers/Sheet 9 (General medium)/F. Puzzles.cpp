#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, m; cin >> n >> m; vector<ll> f(m);
    for(ll i = 0; i < m; i++) cin >> f[i];
    sort(f.begin(), f.end());
    ll ans = INT_MAX;
    for(ll i = 0; i + n - 1 < m; i++) ans = min(ans, f[i + n - 1] - f[i]);
    cout << ans << endl;
    return 0;
}
