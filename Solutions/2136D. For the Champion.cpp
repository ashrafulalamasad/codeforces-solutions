#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, res; cin >> n; vector<ll> x(n), y(n);
        for(ll i = 0; i < n; i++) cin >> x[i] >> y[i];
        ll mn1 = LLONG_MAX, mx2 = LLONG_MIN;
        for(ll i = 0; i < n; i++){
            mn1 = min(mn1, y[i] - x[i]);
            mx2 = max(mx2, x[i] + y[i]);
        }
        cout << "? R 1000000000" << endl;
        cin >> res;
        cout << "? R 1000000000" << endl;
        cin >> res;
        cout << "? D 1000000000" << endl;
        cin >> res;
        cout << "? D 1000000000" << endl;
        cin >> res;
        ll res1 = mn1 + 4000000000 - res;
        cout << "? U 1000000000" << endl;
        cin >> res;
        cout << "? U 1000000000" << endl;
        cin >> res;
        cout << "? U 1000000000" << endl;
        cin >> res;
        cout << "? U 1000000000" << endl;
        cin >> res;
        ll res2 = mx2 + res - 4000000000;
        cout << "! " << (res2 - res1) / 2 << " " << (res2 + res1) / 2 << endl;
    }
    return 0;
}
