#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        auto check = [&](ll v) -> ll {
            vector<ll> pref(n + 1, 0);
            for(ll i = 0; i < n; i++){
                if(a[i] >= v) pref[i + 1] = pref[i] + 1;
                else pref[i + 1] = pref[i] - 1;
            }
            ll inf = 4000000000000000000LL;
            ll minE = inf, minO = inf, idxE = -1, idxO = -1;
            for(ll j = k; j <= n; j++){
                ll i = j - k;
                if(i % 2 == 0){
                    if(pref[i] < minE){
                        minE = pref[i];
                        idxE = i;
                    }
                }else{
                    if(pref[i] < minO){
                        minO = pref[i];
                        idxO = i;
                    }
                }
                if(j % 2 == 0){
                    if(minE <= pref[j]) return idxE * n + (j - 1);
                    if(minO <= pref[j] - 1) return idxO * n + (j - 1);
                }else{
                    if(minO <= pref[j]) return idxO * n + (j - 1);
                    if(minE <= pref[j] - 1) return idxE * n + (j - 1);
                }
            }
            return -1;
        };
        ll lo = 1, hi = n, best = 1;
        while(lo <= hi){
            ll mid = (lo + hi) / 2;
            if(check(mid) != -1){
                best = mid;
                lo = mid + 1;
            }else hi = mid - 1;
        }
        ll code = check(best);
        ll l = code / n, r = code % n;
        cout << best << " " << l + 1 << " " << r + 1 << endl;
    }
    return 0;
}
