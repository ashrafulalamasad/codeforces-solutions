#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<ll> a(n + 1);
    for(ll i = 1; i <= n; i++) cin >> a[i];
    ll m; cin >> m;
    while(m--){
        ll x, y; cin >> x >> y;
        ll left = y - 1, right = a[x] - y;
        if(x > 1) a[x - 1] += left;
        if(x < n) a[x + 1] += right;
        a[x] = 0;
    }
    for(ll i = 1; i <= n; i++) cout << a[i] << endl;
    return 0;
}
