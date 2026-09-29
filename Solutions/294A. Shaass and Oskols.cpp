#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    ll m; cin >> m;
    for(ll k = 0; k < m; k++){
        ll x, y; cin >> x >> y;
        x = x - 1;
        ll left = y - 1;
        ll right = a[x] - y;
        a[x] = 0;
        if(x - 1 >= 0) a[x - 1] = a[x - 1] + left;
        if(x + 1 < n) a[x + 1] = a[x + 1] + right;
    }
    for(ll i = 0; i < n; i++) cout << a[i] << endl;
    return 0;
}
