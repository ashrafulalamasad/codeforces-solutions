#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m; cin >> n >> m; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        vector<ll> cnt(m + 1, 0);
        ll covered = 0, l = 0, ans = LLONG_MAX;
        auto update = [&](ll x, ll delta){
            for(ll d = 1; d * d <= x; d++){
                if(x % d != 0) continue;
                ll pair[2] = {d, x / d};
                for(ll j = 0; j < 2; j++){
                    if(j == 1 && pair[0] == pair[1]) break;
                    ll v = pair[j];
                    if(v > m) continue;
                    if(delta == 1){
                        if(cnt[v]++ == 0) covered++;
                    }else{
                        if(--cnt[v] == 0) covered--;
                    }
                }
            }
        };
        for(ll r = 0; r < n; r++){
            update(a[r], 1);
            while(covered == m){
                ans = min(ans, a[r] - a[l]);
                update(a[l], -1);
                l++;
            }
        }
        if(ans == LLONG_MAX) cout << -1 << endl;
        else cout << ans << endl;
    }
    return 0;
}
