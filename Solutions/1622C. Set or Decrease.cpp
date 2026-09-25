#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k, sum = 0; cin >> n >> k; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        for(ll i = 0; i < n; i++) sum = sum + a[i];
        if(sum <= k) cout << 0 << endl;
        else{
            vector<ll> pref(n + 1, 0);
            for(ll i = 0; i < n; i++) pref[i + 1] = pref[i] + a[i];
            ll ans = sum - k;
            for(ll cnt = 1; cnt < n; cnt++){
                ll sumLarge = sum - pref[n - cnt];
                ll need = sum - sumLarge + cnt * a[0] - k;
                ll d = 0;
                if(need > 0) d = (need + cnt) / (cnt + 1);
                ll cand = cnt + d;
                if(cand < ans) ans = cand;
            }
            cout << ans << endl;
        }
    }
    return 0;
}
