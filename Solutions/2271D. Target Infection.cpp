#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m, k; cin >> n >> m >> k;
        vector<ll> l(n), r(n), pref(n + 1);
        pref[0] = 0;
        for(ll i = 0; i < n; i++){
            cin >> l[i] >> r[i];
            pref[i + 1] = pref[i] + r[i] - l[i] + 1;
        }
        auto f = [&](ll s){
            ll e = s + m - 1;
            ll i = lower_bound(r.begin(), r.end(), s) - r.begin();
            ll j = upper_bound(l.begin(), l.end(), e) - l.begin() - 1;
            if(i > j) return 0LL;
            ll ans = pref[j + 1] - pref[i];
            ans = ans - max(0LL, s - l[i]);
            ans = ans - max(0LL, r[j] - e);
            return ans;
        };
        ll mx = -1, pos = 1;
        for(ll i = 0; i < n; i++){
            ll cur = f(l[i]);
            if(cur > mx){
                mx = cur;
                pos = l[i];
            }
        }
        if(k > mx) cout << -1 << endl; else{
            if(k == mx) cout << pos << endl; else{
                ll low = pos;
                ll high = 1000000000000001LL;
                while(high - low > 1){
                    ll mid = (low + high) / 2;
                    if(f(mid) > k) low = mid;
                    else high = mid;
                }
                cout << high << endl;
            }
        }
    }
    return 0;
}
