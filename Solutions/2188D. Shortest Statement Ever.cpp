#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll x, y; cin >> x >> y;
        ll best = 4000000000000000000LL, p, q;
        auto upd = [&](ll _p, ll _q){
            if((_p & _q) == 0 && abs(_p - x) + abs(_q - y) < best){
                best = abs(_p - x) + abs(_q - y);
                p = _p; q = _q;
            }
        };
        upd(x, y);
        for(ll i = 29; i >= 0; i--){
            if((x & y) >> i & 1){
                upd((x >> i << i) + (1LL << i), y);
                upd(x, (y >> i << i) + (1LL << i));
                upd(x >> i << i, (y >> i << i) - 1);
                upd((x >> i << i) - 1, y >> i << i);
            }
        }
        cout << p << " " << q << endl;
    }
    return 0;
}
