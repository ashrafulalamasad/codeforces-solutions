#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll h, d; cin >> h >> d;
        auto tri = [](ll m) -> ll { return m * (m + 1) / 2; };
        auto cost = [&](ll k) -> ll {
            ll q = d / k, s = d % k;
            return s * tri(q + 1) + (k - s) * tri(q);
        };
        ll lo = 1, hi = d;
        while(lo < hi){
            ll mid = (lo + hi) / 2;
            if(cost(mid) - h + 1 <= mid - 1){
                hi = mid;
            }else{
                lo = mid + 1;
            }
        }
        ll best = LLONG_MAX;
        for(ll k = max(1LL, lo - 1); k <= min(d, lo + 1); k++){
            best = min(best, max(k - 1, cost(k) - h + 1));
        }
        cout << d + best << endl;
    }
    return 0;
}
