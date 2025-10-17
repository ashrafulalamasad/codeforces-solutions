#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll query(ll type, ll l, ll r) {
    cout << type << " " << l << " " << r << endl;
    cout.flush();
    ll res; cin >> res;
    return res;
}

int main()
{
    fast;
    tc{
        ll n; cin >> n;
        ll total = query(2, 1, n);
        ll base = 1LL * n * (n + 1) / 2;
        ll len = total - base;
        ll lo = 1, hi = n - len + 1;
        while(lo < hi) {
            ll mid = (lo + hi) / 2;
            ll s1 = query(1, 1, mid);
            ll s2 = query(2, 1, mid);
            if(s2 > s1) hi = mid;
            else lo = mid + 1;
        }
        ll l = lo, r = l + len - 1;
        cout << "! " << l << " " << r << endl;
        cout.flush();
    }
    return 0;
}
