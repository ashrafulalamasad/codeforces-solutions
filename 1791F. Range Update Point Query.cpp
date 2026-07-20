#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t; cin >> t; while(t--)
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll digitSum(ll x){
    ll s = 0;
    while(x > 0){ s += x % 10; x /= 10; }
    return s;
}

int main()
{
    fast;
    tc{
        ll n, q; cin >> n >> q;
        vector<ll> a(n + 1);
        set<ll> unstable;
        for(ll i = 1; i <= n; i++){
            cin >> a[i];
            if(a[i] >= 10) unstable.insert(i);
        }
        while(q--){
            ll type; cin >> type;
            if(type == 1){
                ll l, r; cin >> l >> r;
                auto it = unstable.lower_bound(l);
                while(it != unstable.end() && *it <= r){
                    ll i = *it;
                    a[i] = digitSum(a[i]);
                    if(a[i] < 10) it = unstable.erase(it);
                    else ++it;
                }
            } else {
                ll x; cin >> x;
                cout << a[x] << endl;
            }
        }
    }
    return 0;
}
