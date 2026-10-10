#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, q; cin >> n >> q; vector<ll> p(n);
    for(ll i = 0; i < n; i++) cin >> p[i];
    sort(p.begin(), p.end());
    vector<ll> prefix(n + 1, 0);
    for(ll i = 1; i <= n; i++) prefix[i] = prefix[i - 1] + p[i - 1];
    while(q--){
        ll x, y; cin >> x >> y;
        cout << prefix[n - x + y] - prefix[n - x] << endl;
    }
    return 0;
}
