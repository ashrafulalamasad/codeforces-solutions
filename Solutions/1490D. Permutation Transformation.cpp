#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n), d(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        auto f = [&](auto&& self, ll l, ll r, ll depth) -> void {
            if(l > r) return;
            ll m = l;
            for(ll i = l; i <= r; i++) if(a[i] > a[m]) m = i;
            d[m] = depth;
            self(self, l, m - 1, depth + 1);
            self(self, m + 1, r, depth + 1);
        };
        f(f, 0, n - 1, 0);
        for(ll i = 0; i < n; i++) cout << d[i] << " ";
        cout << endl;
    }
    return 0;
}
