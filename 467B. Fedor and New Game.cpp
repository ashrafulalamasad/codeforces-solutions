#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, m, k; cin >> n >> m >> k;
    ll x[m + 1];
    for(ll i = 0; i <= m; i++) cin >> x[i];
    ll ans = 0;
    for(ll i = 0; i < m; i++){
        ll diff = __builtin_popcount(x[i] ^ x[m]);
        if(diff <= k) ans++;
    }
    cout << ans << endl;
    return 0;
}
