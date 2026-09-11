#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, ans = 0; cin >> n; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        map<pair<ll, ll>, ll> fs, ft, st;
        map<tuple<ll, ll, ll>, ll> triples;
        for(ll i = 0; i < n - 2; i++){
            ll x = a[i], y = a[i + 1], z = a[i + 2];
            ans += fs[{x, y}] + ft[{x, z}] + st[{y, z}];
            ans -= 3 * triples[{x, y, z}];
            fs[{x, y}]++;
            ft[{x, z}]++;
            st[{y, z}]++;
            triples[{x, y, z}]++;
        }
        cout << ans << endl;
    }
    return 0;
}
