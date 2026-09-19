#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<ll> ans(n);
    vector<vector<ll>> a(n, vector<ll>(n));
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < n; j++) cin >> a[i][j];
    }
    ll x = a[0][1] * a[0][2] / a[1][2];
    ll r = sqrt((long double)x);
    while((r + 1) * (r + 1) <= x) r++;
    while(r * r > x) r--; ans[0] = r;
    for(ll i = 1; i < n; i++) ans[i] = a[0][i] / ans[0];
    for(ll i = 0; i < n; i++) cout << ans[i] << " ";
    cout << endl;
    return 0;
}
