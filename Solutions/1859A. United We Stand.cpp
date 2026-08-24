#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n), b, c;
        ll mn = 1e18;
        for(ll &x : a) cin >> x, mn = min(mn, x);
        for(ll x : a){
            if (x == mn) b.push_back(x);
            else c.push_back(x);
        }
        if (c.empty()) {
            cout << -1 << endl;
            continue;
        }
        cout << b.size() << ' ' << c.size() << endl;
        for (ll x : b) cout << x << ' ';
        cout << endl;
        for (ll x : c) cout << x << ' ';
        cout << endl;
    }
    return 0;
}
